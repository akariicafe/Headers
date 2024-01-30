@class NSString, NSArray, NSMutableDictionary, EMMailDropMetadata, NSMutableSet, NSObject, NSProgress, WKWebView;
@protocol OS_os_log, EFScheduler, ContentRepresentationHandlingDelegate, MSMailWebProcessAttachmentProxy;

@interface MessageContentItemsHelper : NSObject <EFLoggable> {
    NSMutableDictionary *_elementIDToContentID;
    NSMutableDictionary *_elementIDToWKAttachmentID;
    NSMutableDictionary *_contentIDToTask;
    NSMutableSet *_inlinedImageContentIDs;
    BOOL _didComputeMailDropProperties;
    long long _totalUnstartedMailDropDownloadSize;
    id<EFScheduler> _attachmentsScheduler;
    NSProgress *_totalMailDropProgress;
    id<MSMailWebProcessAttachmentProxy> _webProcessProxy;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) WKWebView *webView;
@property (retain, nonatomic) NSArray *contentItems;
@property (weak, nonatomic) id<ContentRepresentationHandlingDelegate> representationHandler;
@property (readonly, nonatomic) EMMailDropMetadata *mailDropBannerMetadata;
@property (nonatomic) unsigned long long totalMailDropDownloadSize;
@property (nonatomic) BOOL allMailDropsDownloaded;
@property (copy, nonatomic) id /* block */ maildropProgressHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)inlineImageFinishedDownloading:(id)a0;
- (void)setDisplayState:(long long)a0 forContentItem:(id)a1;
- (void)_computeMailDropProperties;
- (id)_futureForContentItem:(id)a0 networkUsage:(long long)a1 invokerID:(id)a2 previouslyInvoked:(BOOL *)a3 progress:(id *)a4;
- (void)_injectAttachmentViewForElementWithSourceAttributeValue:(id)a0 forContentItem:(id)a1;
- (id)_representationTypeForContentItem:(id)a0;
- (void)_updateProgressFraction:(id)a0 forContentItem:(id)a1;
- (void)associateElementID:(id)a0 withContentID:(id)a1;
- (void)associateElementID:(id)a0 withWKAttachmentID:(id)a1;
- (void)attachmentWasTappedWithElementID:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 view:(id)a2;
- (id)contentItemForContentID:(id)a0;
- (id)contentItemForElementID:(id)a0;
- (long long)displayStateForContentItem:(id)a0;
- (void)displayViewerForContentItem:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 view:(id)a2;
- (void)downloadAllMailDropAttachments;
- (id)futureForContentItem:(id)a0 download:(BOOL)a1;
- (id)initWithWebView:(id)a0 contentItemHandler:(id)a1;
- (void)noteDidFailLoadingResourceWithURL:(id)a0;
- (void)noteDidFinishDocumentLoadForURL:(id)a0;
- (void)setPercentCompleted:(double)a0 forContentItem:(id)a1;
- (void)showMenuForContentItem:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 view:(id)a2;
- (id)startDownloadForContentItem:(id)a0 userInitiated:(BOOL)a1;
- (void)updateDragItemProvider:(id)a0 forElementID:(id)a1;

@end

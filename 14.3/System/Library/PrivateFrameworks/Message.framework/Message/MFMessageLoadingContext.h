@class EFObservable, NSString, EFCancelationToken, MFMimePart, MFMailMessage, MFMimeBody, MFAttachmentManager;
@protocol EFObserver;

@interface MFMessageLoadingContext : NSObject <EFCancelable> {
    EFCancelationToken *_cancelable;
    EFObservable<EFObserver> *_inputObservable;
    NSString *_eventUniqueID;
    NSString *_meetingName;
    NSString *_meetingStorePersistentID;
    NSString *_eventICSRepresentation;
}

@property (retain, nonatomic, setter=_setMessage:) MFMailMessage *message;
@property (retain, nonatomic, setter=_setMessageBody:) MFMimeBody *messageBody;
@property (retain, nonatomic, setter=_setAttachmentManager:) MFAttachmentManager *attachmentManager;
@property (retain, nonatomic) MFMimePart *loadedPart;
@property (nonatomic) unsigned long long contentOffset;
@property (nonatomic) BOOL hasLoadedSomeContent;
@property (nonatomic) BOOL hasLoadedCompleteMessage;
@property (nonatomic) BOOL hasLoadedBestAlternativePart;
@property (readonly, nonatomic, getter=isOutgoingMessage) BOOL outgoingMessage;
@property (readonly, nonatomic, getter=isDraftMessage) BOOL draftMessage;
@property (readonly, nonatomic, getter=isEditableMessage) BOOL editableMessage;
@property (readonly, nonatomic) EFObservable *contentObservable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;
+ (unsigned long long)_nextOffsetForOffset:(unsigned long long)a0 totalLength:(unsigned long long)a1 requestedAmount:(unsigned long long)a2;

- (void)cancel;
- (void)load:(long long)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithMessage:(id)a0 attachmentManager:(id)a1;
- (void)load:(long long)a0 scheduler:(id)a1 shouldDownload:(BOOL)a2;
- (void)_setupMeetingData;
- (void)_setupObservableStreams;
- (void)assignAttachmentManagerToContent:(id)a0;
- (void)processMeetingInvitations:(id)a0;
- (id)onScheduler:(id)a0 addLoadObserver:(id /* block */)a1;
- (void)load:(long long)a0 scheduler:(id)a1;
- (void)_load:(long long)a0 shouldDownload:(BOOL)a1;
- (id)_reallyLoad:(long long)a0 shouldDownload:(BOOL)a1;
- (id)addLoadObserver:(id /* block */)a0;

@end

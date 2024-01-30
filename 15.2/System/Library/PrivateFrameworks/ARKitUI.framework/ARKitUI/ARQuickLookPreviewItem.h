@class UIColor, NSString, NSDictionary, NSURL;

@interface ARQuickLookPreviewItem : NSObject <QLPreviewItemPrivateProtocol, QLPreviewItem>

@property (retain, nonatomic) NSURL *fileURL;
@property (nonatomic) BOOL wantsStatusPillHidden;
@property (nonatomic) BOOL forceIgnoreMuteSwitch;
@property (retain, nonatomic) NSURL *canonicalWebPageURL;
@property (nonatomic) BOOL allowsContentScaling;
@property (readonly, nonatomic) NSString *previewItemContentType;
@property (readonly) NSURL *previewItemURLForDisplay;
@property (readonly, nonatomic) BOOL isPromisedItem;
@property (readonly) double autoPlaybackPosition;
@property (readonly) UIColor *backgroundColorOverride;
@property (readonly) NSString *MIMEType;
@property (copy, nonatomic) NSDictionary *previewOptions;
@property (readonly, nonatomic) NSURL *previewItemURL;
@property (readonly, nonatomic) NSString *previewItemTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFileAtURL:(id)a0;
- (void).cxx_destruct;

@end

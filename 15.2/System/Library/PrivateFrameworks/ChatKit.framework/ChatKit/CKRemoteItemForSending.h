@class NSString, NSURL, NSData, NSObject, MSMessage;
@protocol OS_dispatch_semaphore;

@interface CKRemoteItemForSending : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct CGImageBlockSet { } *blockSet;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *previewCreationSemaphore;
@property (retain, nonatomic) NSURL *attachmentURL;
@property (retain, nonatomic) NSString *attachmentDescription;
@property (nonatomic) struct __IOSurface { } *previewImage;
@property (nonatomic) BOOL previewIsFullyRealizedByChatKit;
@property (retain, nonatomic) NSURL *appendedVideoURL;
@property (retain, nonatomic) NSURL *appendedBundleURL;
@property (retain, nonatomic) NSURL *appendedRichLinkURL;
@property (copy, nonatomic) NSData *appendedRichLinkData;
@property (copy, nonatomic) MSMessage *appendedMessage;

+ (BOOL)hasAppendedVideo:(id)a0;
+ (id)previewQueue;

- (id)initWithAttachmentURL:(id)a0 description:(id)a1 blockOnPreviewCreation:(BOOL)a2;
- (id)initWithMSMessage:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)previewUIImage;
- (BOOL)isAttachmentTooLarge:(id)a0;
- (void)_setPreviewUIImage:(id)a0;
- (void)beginPreviewCreation;
- (id)initWithAttachmentURL:(id)a0 description:(id)a1 previewImage:(id)a2 blockOnPreviewCreation:(BOOL)a3;
- (void)waitForPreviewGenerationIfNecessary;
- (id)initWithRichLinkWithURL:(id)a0 data:(id)a1;

@end

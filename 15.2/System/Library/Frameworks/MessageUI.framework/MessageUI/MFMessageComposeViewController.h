@class NSString, NSArray, MSMessage;
@protocol MFMessageComposeViewControllerDelegate;

@interface MFMessageComposeViewController : UINavigationController {
    id _internal;
    NSArray *_UTITypes;
    NSArray *_photoIDs;
    NSArray *_cloudPhotoIDs;
    NSArray *_contentText;
    NSArray *_contentURLs;
    NSString *_shareSheetSessionID;
}

@property (nonatomic) unsigned long long currentAttachedVideoCount;
@property (nonatomic) unsigned long long currentAttachedAudioCount;
@property (nonatomic) unsigned long long currentAttachedImageCount;
@property (copy, nonatomic) NSString *chatGUID;
@property (copy, nonatomic) NSString *groupName;
@property (nonatomic) BOOL shouldHideClearPluginButton;
@property (weak, nonatomic) id<MFMessageComposeViewControllerDelegate> messageComposeDelegate;
@property (copy, nonatomic) NSArray *recipients;
@property (copy, nonatomic) NSString *body;
@property (copy, nonatomic) NSString *subject;
@property (readonly, copy, nonatomic) NSArray *attachments;
@property (copy, nonatomic) MSMessage *message;

+ (void)initialize;
+ (id)log;
+ (double)maxTrimDurationForAudio;
+ (double)maxTrimDurationForVideo;
+ (BOOL)canSendPhotos:(int)a0 videos:(int)a1 audioClips:(int)a2;
+ (BOOL)isMMSEnabled;
+ (void)_preloadDependencies;
+ (BOOL)isiMessageEnabled;
+ (void)_setupAccountMonitor;
+ (BOOL)_canSendText;
+ (BOOL)canSendText;
+ (void)_updateServiceAvailability;
+ (BOOL)isSupportedAttachmentUTI:(id)a0;
+ (void)_serviceAvailabilityChanged:(id)a0;
+ (id)_chatKitBundle;
+ (BOOL)canSendSubject;
+ (BOOL)canSendAttachments;
+ (void)_startListeningForAvailabilityNotifications;

- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (id)UTITypes;
- (void)smsComposeControllerCancelled:(id)a0;
- (void)smsComposeControllerSendStarted:(id)a0;
- (void)smsComposeControllerEntryViewContentInserted:(id)a0;
- (void).cxx_destruct;
- (id)photoIDs;
- (BOOL)addRichLinkData:(id)a0 withWebpageURL:(id)a1;
- (BOOL)addAttachmentURL:(id)a0 withAlternateFilename:(id)a1;
- (BOOL)addAttachmentData:(id)a0 typeIdentifier:(id)a1 filename:(id)a2;
- (void)setPhotoIDs:(id)a0;
- (void)setUTITypes:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)setModalPresentationStyle:(long long)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)setContentURLs:(id)a0;
- (void)setContentText:(id)a0;
- (id)contentText;
- (void)smsComposeControllerShouldSendMessageWithText:(id)a0 toRecipients:(id)a1 completion:(id /* block */)a2;
- (void)setCloudPhotoIDs:(id)a0;
- (void)setShareSheetSessionID:(id)a0;
- (id)attachmentURLs;
- (id)cloudPhotoIDs;
- (id)contentURLs;
- (id)shareSheetSessionID;
- (void)disableUserAttachments;
- (id)_MIMETypeForURL:(id)a0;
- (BOOL)_isVideoMIMEType:(id)a0;
- (BOOL)_isAudioMIMEType:(id)a0;
- (BOOL)_isImageMIMEType:(id)a0;
- (id)_contentTypeForMIMEType:(id)a0;
- (void)_updateAttachmentCountForAttachmentURL:(id)a0;
- (BOOL)canAddAttachmentURL:(id)a0;
- (id)mutableAttachmentURLs;
- (BOOL)addAttachmentData:(id)a0 withAlternateFilename:(id)a1;
- (void)insertSharedItemAndReturnEntryViewFrame:(id)a0 withAlternateFilename:(id)a1 completion:(id /* block */)a2;
- (void)showSharedItemInEntryView;
- (void)_setCanEditRecipients:(BOOL)a0;
- (void)_setShouldDisableEntryField:(BOOL)a0;
- (void)_setNavBarTitle:(id)a0;
- (void)_setShouldIgnoreEmailsWhenSending:(BOOL)a0;

@end

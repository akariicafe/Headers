@class NSHashTable, LPLinkView, NSString, ICAddAttachmentsManagerAttachmentInfo, NSLayoutConstraint, ICAttachment, NSRegularExpression, UIColor;

@interface ICAttachmentBrickViewLP : UIView <LPLinkViewDelegate, LPAudioPlayer>

@property (retain, nonatomic) LPLinkView *lpLinkView;
@property (readonly, nonatomic) unsigned long long type;
@property (retain, nonatomic) NSLayoutConstraint *widthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (retain, nonatomic) NSHashTable *audioPlayerClients;
@property (nonatomic) unsigned long long playerState;
@property (nonatomic) float playbackProgress;
@property (nonatomic) BOOL didSendResizeNotification;
@property (nonatomic) BOOL waitingForMetadata;
@property (readonly, nonatomic) BOOL isMetadataComplete;
@property (retain, nonatomic) NSRegularExpression *highlightPatternRegex;
@property (weak, nonatomic) ICAttachment *attachment;
@property (weak, nonatomic) ICAddAttachmentsManagerAttachmentInfo *shareExtensionAttachmentInfo;
@property (nonatomic) BOOL selected;
@property (nonatomic, getter=isInsideSystemPaper) BOOL insideSystemPaper;
@property (copy, nonatomic) UIColor *highlightColor;
@property (readonly, nonatomic) double effectiveLayoutCornerRadius;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } computedSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) float progress;
@property (readonly, nonatomic) unsigned long long state;

+ (struct CGSize { double x0; double x1; })defaultBrickSize;
+ (BOOL)usesSmallSizeForAttachment:(id)a0 withMetadata:(id)a1 type:(unsigned long long)a2 insideSystemPaper:(BOOL)a3;
+ (struct CGSize { double x0; double x1; })sizeForAttachment:(id)a0 usesSmallSize:(BOOL)a1;

- (void)reloadData;
- (void)removeClient:(id)a0;
- (void)applicationDidBecomeActive;
- (void)updateTitle;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (void)traitCollectionDidChange:(id)a0;
- (id)accessibilityValue;
- (void)pause;
- (void)prepareForReuse;
- (id)initWithType:(unsigned long long)a0;
- (void)addClient:(id)a0;
- (id)accessibilityElements;
- (void)play;
- (void)dealloc;
- (id)accessibilityLabel;
- (void)reset;
- (id)_linkView:(id)a0 playerForAudio:(id)a1;
- (id)_linkView:(id)a0 contextMenuConfigurationForSuggestedConfiguration:(id)a1;
- (id)typeDescriptionForAccessibility;
- (void)attachmentDidLoadNotification:(id)a0;
- (void)attachmentPreviewImagesDidUpdateNotification:(id)a0;
- (void)mediaDidLoadNotification:(id)a0;
- (id)quickLookTransitionView;
- (void)updateSearchResutBackgroundColorIfNecessary;
- (void)constrainViews;
- (void)initialAttachmentPreviewDidLoad:(id)a0;
- (void)didFailFetchingMetadataNotification:(id)a0;
- (void)notifyClientsAboutSizeChagesIfNecessary;
- (void)adjustSizeIfNecessary;
- (void)displaySynapseAttachmentPreview;
- (void)displayRemoteAttachmentPreview;
- (void)displayGenericURLPreview;
- (void)displayUnsupportedAttachmentPreview;
- (void)displayScannedDocumentsPreview;
- (void)displayFilePreview;
- (void)updateUIWithMetadata:(id)a0;
- (void)progressChangedNotification:(id)a0;
- (void)playbackStartedNotification:(id)a0;
- (void)playbackPausedNotification:(id)a0;
- (void)playbackStoppedNotification:(id)a0;
- (void)updateAudioClientsState:(unsigned long long)a0;
- (void)resetPlaybackProgressAndState;
- (void)updateAudioClientsProgress:(float)a0;

@end

@interface PXPeopleUISettings : PXSettings

@property (nonatomic) BOOL enableBootstrapSpeedBump;
@property (nonatomic) BOOL enableFixingMergeMistakes;
@property (nonatomic) BOOL enableNewCropManager;
@property (nonatomic) BOOL enableNewOneUpWidget;
@property (nonatomic, getter=shouldAlwaysShowBootstrap) BOOL alwaysShowBootstrap;
@property (nonatomic, getter=shouldAlwaysShowCandidateWidget) BOOL alwaysShowCandidateWidget;
@property (nonatomic, getter=shouldAlwaysShowMe) BOOL alwaysShowMe;
@property (nonatomic, getter=shouldDisplayBootstrapSuggestionType) BOOL displayBootstrapSuggestionType;
@property (nonatomic, getter=shouldDisplayConfirmAdditionalSuggestionType) BOOL displayConfirmAdditionalSuggestionType;
@property (nonatomic, getter=shouldDisplayConfirmationPhotoDate) BOOL displayConfirmationPhotoDate;
@property (nonatomic, getter=shouldDebugBlurredCells) BOOL debugBlurredCells;
@property (nonatomic, getter=shouldShowContactSuggestions) BOOL showContactSuggestions;
@property (nonatomic, getter=shouldShowMaybeContact) BOOL showMaybeContact;
@property (nonatomic) BOOL showManageTagsTagType;
@property (nonatomic) BOOL debugFadeLayer;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end

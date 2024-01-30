@interface PXPeopleUISettings : PXSettings

@property (nonatomic, getter=shouldAlwaysShowBootstrap) BOOL alwaysShowBootstrap;
@property (nonatomic, getter=shouldAlwaysShowCandidateWidget) BOOL alwaysShowCandidateWidget;
@property (nonatomic, getter=shouldAlwaysShowMe) BOOL alwaysShowMe;
@property (nonatomic, getter=shouldDisplayBootstrapSuggestionType) BOOL displayBootstrapSuggestionType;
@property (nonatomic, getter=shouldDisplayConfirmAdditionalSuggestionType) BOOL displayConfirmAdditionalSuggestionType;
@property (nonatomic, getter=shouldDisplayConfirmationPhotoDate) BOOL displayConfirmationPhotoDate;
@property (nonatomic, getter=shouldDebugBlurredCells) BOOL debugBlurredCells;
@property (nonatomic, getter=shouldShowContactSuggestions) BOOL showContactSuggestions;
@property (nonatomic, getter=shouldShowMaybeContact) BOOL showMaybeContact;
@property (nonatomic) BOOL enableBlocking;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;

@end

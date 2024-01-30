@interface SBSystemNotesInteractionSettings : SBPIPInteractionSettings

@property (nonatomic) double delayBeforeUserInteractionDismissesThumbnail;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end

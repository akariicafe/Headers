@interface HUAvailableTriggerItemSwitchCell : HUIconSwitchCell

@property (nonatomic) double reservedSwitchWidth;
@property (nonatomic, getter=switchIsHidden) BOOL switchHidden;

- (void)updateConstraints;

@end

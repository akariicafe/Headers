@interface _UITabBarBehaviorSettings : PTSettings

@property (nonatomic) double stackedLeadingPadding;
@property (nonatomic) double stackedTrailingPadding;
@property (nonatomic) double stackedTopInset;
@property (nonatomic) double stackedBottomInset;
@property (nonatomic) double stackedCornerRadius;
@property (nonatomic) double inlineLeadingPadding;
@property (nonatomic) double inlineTrailingPadding;
@property (nonatomic) double inlineTopInset;
@property (nonatomic) double inlineBottomInset;
@property (nonatomic) double inlineCornerRadius;
@property (nonatomic) double inlineHomeButtonVerticalOffset;
@property (nonatomic) double inlineHomeAffordanceVerticalOffset;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end

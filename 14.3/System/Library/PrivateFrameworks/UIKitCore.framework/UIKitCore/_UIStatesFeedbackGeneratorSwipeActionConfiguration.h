@interface _UIStatesFeedbackGeneratorSwipeActionConfiguration : _UIStatesFeedbackGeneratorConfiguration

+ (id)defaultConfiguration;
+ (id)openState;
+ (id)restingState;
+ (id)confirmState;

- (long long)requiredSupportLevel;

@end

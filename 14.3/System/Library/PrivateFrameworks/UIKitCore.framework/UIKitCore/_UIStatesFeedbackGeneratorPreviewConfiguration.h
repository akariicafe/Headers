@interface _UIStatesFeedbackGeneratorPreviewConfiguration : _UIStatesFeedbackGeneratorConfiguration

+ (id)commitState;
+ (id)cancelState;
+ (id)defaultConfiguration;
+ (id)revealState;
+ (id)previewState;

- (BOOL)defaultEnabled;
- (long long)requiredSupportLevel;

@end

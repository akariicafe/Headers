@interface _UIStatesFeedbackGeneratorPreviewConfiguration : _UIStatesFeedbackGeneratorConfiguration

+ (id)revealState;
+ (id)cancelState;
+ (id)previewState;
+ (id)defaultConfiguration;
+ (id)commitState;

- (BOOL)defaultEnabled;
- (long long)requiredSupportLevel;

@end

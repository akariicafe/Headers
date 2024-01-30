@interface _UIStatesFeedbackGeneratorPreviewConfiguration : _UIStatesFeedbackGeneratorConfiguration

+ (id)revealState;
+ (id)defaultConfiguration;
+ (id)cancelState;
+ (id)commitState;
+ (id)previewState;

- (BOOL)defaultEnabled;
- (long long)requiredSupportLevel;

@end

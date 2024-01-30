@interface _TIInputModePreferenceProvider : NSObject <TIInputModePreferenceProvider>

- (id)enabledInputModeIdentifiers;
- (id)defaultEnabledInputModesForCurrentLocale;

@end

@interface SleepHealthUI.ProactiveSuggestionProvider : NSObject <HKSPSuggestionProvider>

- (id)init;
- (void)hksp_suggestedSleepScheduleWithCompletion:(id /* block */)a0;

@end

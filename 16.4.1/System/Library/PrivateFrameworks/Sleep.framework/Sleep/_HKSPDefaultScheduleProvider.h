@class NSString;

@interface _HKSPDefaultScheduleProvider : NSObject <HKSPSuggestionProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hksp_suggestedSleepScheduleWithCompletion:(id /* block */)a0;

@end

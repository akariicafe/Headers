@class NSString;

@interface TIAnalyticsServiceProviderImpl : NSObject <TIAnalyticsServiceProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dispatchEventWithName:(id)a0 payload:(id)a1;

@end

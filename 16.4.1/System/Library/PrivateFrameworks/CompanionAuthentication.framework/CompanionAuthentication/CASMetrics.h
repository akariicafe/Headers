@interface CASMetrics : NSObject

+ (void)_sendEvent:(id)a0 withPayloadBuilder:(id /* block */)a1;
+ (void)sendAppSignInSessionActivatedEvent:(struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; })a0;
+ (void)sendAppSignInSessionCompletedEvent:(struct { long long x0; })a0;
+ (void)sendLearnMorePressedEvent;
+ (void)sendProviderDeviceUsageEvent:(struct { id x0; unsigned long long x1; })a0;
+ (void)sendStorePurchaseSessionCompletedEvent:(struct { long long x0; })a0;
+ (void)sendSystemSessionCompletedEvent:(struct { long long x0; long long x1; })a0;

@end

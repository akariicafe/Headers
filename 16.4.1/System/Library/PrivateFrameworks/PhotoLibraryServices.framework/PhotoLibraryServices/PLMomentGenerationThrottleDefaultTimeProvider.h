@class NSString;

@interface PLMomentGenerationThrottleDefaultTimeProvider : NSObject <PLMomentGenerationThrottleTimeProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)currentTime;

@end

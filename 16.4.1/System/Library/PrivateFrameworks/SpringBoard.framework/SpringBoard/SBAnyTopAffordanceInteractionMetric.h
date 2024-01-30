@class NSString;

@interface SBAnyTopAffordanceInteractionMetric : NSObject <SBFAnalyticsBackendEventHandling>

@property (nonatomic) BOOL hasSentEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)handleEvent:(unsigned long long)a0 withContext:(id)a1;

@end

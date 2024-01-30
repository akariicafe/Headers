@class NSString;

@interface SBIdleTimerTimeoutPrecedenceSettings : NSObject <BSDescriptionProviding>

@property (readonly, nonatomic) double normalTimeout;
@property (readonly, nonatomic) double highTimeout;
@property (readonly, nonatomic) double criticalTimeout;
@property (readonly, nonatomic) unsigned long long highestPrecedence;
@property (readonly, nonatomic) double leastTimeout;
@property (readonly, nonatomic) double greatestTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (double)_intervalForPrecedence:(unsigned long long)a0;
- (void)_setTimeout:(double)a0 ifGreatestForPrecedence:(unsigned long long)a1;
- (void)_setTimeout:(double)a0 ifLeastForPrecedence:(unsigned long long)a1;
- (void)_setTimeout:(double)a0 withPrecedence:(unsigned long long)a1;

@end

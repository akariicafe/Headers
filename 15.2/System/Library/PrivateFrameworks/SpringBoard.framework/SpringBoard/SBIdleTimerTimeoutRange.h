@class NSString;

@interface SBIdleTimerTimeoutRange : NSObject <BSDescriptionProviding>

@property (readonly, nonatomic) double lowerTimeout;
@property (readonly, nonatomic) double upperTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (BOOL)intersects:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithLowerTimeout:(double)a0 upperTimeout:(double)a1;
- (id)clippedRangeWithFavoredRange:(id)a0;

@end

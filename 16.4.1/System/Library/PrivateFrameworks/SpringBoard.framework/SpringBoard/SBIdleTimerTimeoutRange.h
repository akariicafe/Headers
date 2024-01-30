@class NSString;

@interface SBIdleTimerTimeoutRange : NSObject <BSDescriptionProviding>

@property (readonly, nonatomic) double lowerTimeout;
@property (readonly, nonatomic) double upperTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (BOOL)intersects:(id)a0;
- (id)clippedRangeWithFavoredRange:(id)a0;
- (id)initWithLowerTimeout:(double)a0 upperTimeout:(double)a1;

@end

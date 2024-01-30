@class NSString, SBIdleTimerProxy;
@protocol SBFIdleTimerBehaviorProviding, SBIdleTimerProviding;

@interface SBIdleTimerInfo : NSObject

@property (readonly, weak, nonatomic) id<SBIdleTimerProviding> provider;
@property (retain, nonatomic) id<SBFIdleTimerBehaviorProviding> behavior;
@property (copy, nonatomic) NSString *reason;
@property (retain, nonatomic) SBIdleTimerProxy *idleTimerProxy;

- (void).cxx_destruct;
- (id)initWithProvider:(id)a0 behavior:(id)a1 reason:(id)a2 idleTimerProxy:(id)a3;

@end

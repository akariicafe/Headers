@class NSString;
@protocol SBIdleTimer;

@interface SBIdleTimerProxy : SBIdleTimerBase <SBIdleTimerObserving>

@property (retain, nonatomic) id<SBIdleTimer> sourceTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)disabledIdleTimerProxy;

- (void)idleTimerDidWarn:(id)a0;
- (void)idleTimerDidExpire:(id)a0;
- (void)_logExpirationTimeout:(double)a0;
- (void)idleTimerDidRefresh:(id)a0;
- (void)setActivated:(BOOL)a0;
- (BOOL)isActivated;
- (id)initWithIdleTimerSource:(id)a0;
- (void)idleTimerDidResetForUserAttention:(id)a0;
- (BOOL)isDisabled;
- (void).cxx_destruct;
- (void)reset;

@end

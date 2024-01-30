@class NSString;
@protocol SBIdleTimer;

@interface SBIdleTimerProxy : SBIdleTimerBase <SBIdleTimerObserving>

@property (retain, nonatomic) id<SBIdleTimer> sourceTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)disabledIdleTimerProxy;

- (void)setActivated:(BOOL)a0;
- (BOOL)isActivated;
- (void)idleTimerDidWarn:(id)a0;
- (BOOL)isDisabled;
- (void)_logExpirationTimeout:(double)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)idleTimerDidExpire:(id)a0;
- (id)initWithIdleTimerSource:(id)a0;
- (void)idleTimerDidResetForUserAttention:(id)a0;
- (void)idleTimerDidRefresh:(id)a0;

@end

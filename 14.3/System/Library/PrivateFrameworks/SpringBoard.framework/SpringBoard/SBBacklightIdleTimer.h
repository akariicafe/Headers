@class SBIdleTimerDescriptor, NSString, ITAttentionAwareIdleTimer;

@interface SBBacklightIdleTimer : SBIdleTimerBase <ITIdleTimerDelegate, BSDescriptionProviding> {
    ITAttentionAwareIdleTimer *_attentionAwareTimer;
}

@property (nonatomic) double timeMultiplier;
@property (nonatomic) unsigned long long expectation;
@property (nonatomic) BOOL requiresManualReset;
@property (copy, nonatomic) SBIdleTimerDescriptor *descriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setActivated:(BOOL)a0;
- (BOOL)isActivated;
- (id)_initWithAttentionAwareTimer:(id)a0;
- (BOOL)isDisabled;
- (id)init;
- (double)_effectiveExpireTimeoutDuration;
- (void).cxx_destruct;
- (double)_effectiveWarnTimeoutDuration;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)reset;
- (void)_reconfigureAttentionClientAndReset:(BOOL)a0;
- (void)idleTimer:(id)a0 attentionLostTimeoutDidExpire:(id)a1;
- (void)_resetExpectation;
- (void)idleTimerDidReset:(id)a0 forUserAttention:(unsigned long long)a1 at:(double)a2;
- (id)succinctDescription;
- (id)initWithConfigurationIdentifier:(id)a0;
- (void)_stopIfManual;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (double)_effectiveQuickUnwarnTimeoutDurationForWarnTimeout:(double)a0;
- (double)_effectiveTimeoutForBaseTimeout:(double)a0;

@end

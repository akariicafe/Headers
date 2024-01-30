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

- (void)idleTimer:(id)a0 attentionLostTimeoutDidExpire:(id)a1;
- (void)_stopIfManual;
- (BOOL)isActivated;
- (double)_effectiveTimeoutForBaseTimeout:(double)a0;
- (void)setActivated:(BOOL)a0;
- (BOOL)isDisabled;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (double)_effectiveExpireTimeoutDuration;
- (void)idleTimerDidReset:(id)a0 forUserAttention:(unsigned long long)a1 at:(double)a2;
- (double)_effectiveWarnTimeoutDuration;
- (id)succinctDescription;
- (id)_initWithAttentionAwareTimer:(id)a0;
- (id)initWithConfigurationIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)_reconfigureAttentionClientAndReset:(BOOL)a0;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (double)_effectiveQuickUnwarnTimeoutDurationForWarnTimeout:(double)a0;
- (id)succinctDescriptionBuilder;
- (void)reset;
- (void)_resetExpectation;

@end

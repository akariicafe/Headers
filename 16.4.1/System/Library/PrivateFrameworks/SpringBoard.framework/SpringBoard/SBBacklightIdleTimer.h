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

- (void)_reconfigureAttentionClientAndReset:(BOOL)a0;
- (void)setActivated:(BOOL)a0;
- (double)_effectiveTimeoutForBaseTimeout:(double)a0;
- (BOOL)isActivated;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithConfigurationIdentifier:(id)a0;
- (id)succinctDescriptionBuilder;
- (double)_effectiveWarnTimeoutDuration;
- (double)_effectiveQuickUnwarnTimeoutDurationForWarnTimeout:(double)a0;
- (void)_resetExpectation;
- (void)idleTimerDidReset:(id)a0 forUserAttention:(unsigned long long)a1 at:(double)a2;
- (double)_effectiveExpireTimeoutDuration;
- (id)_initWithAttentionAwareTimer:(id)a0;
- (void)_stopIfManual;
- (void)idleTimer:(id)a0 attentionLostTimeoutDidExpire:(id)a1;
- (id)succinctDescription;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (BOOL)isDisabled;
- (void).cxx_destruct;
- (void)reset;

@end

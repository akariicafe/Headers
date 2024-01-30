@class NSArray, NSString;

@interface ITIdleTimerDescriptor : NSObject <NSCopying, BSDescriptionProviding>

@property (readonly, nonatomic) unsigned long long attentionMaintenanceEventMask;
@property (readonly, nonatomic) unsigned long long attentionRecoveryEventMask;
@property (nonatomic) double attentionSamplingPeriod;
@property (nonatomic) double attentionSamplingStartDelay;
@property (nonatomic) double attentionSamplingStartBeforeFirstTimeout;
@property (copy, nonatomic) NSArray *timeouts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)setAttentionEventMaintenanceMask:(unsigned long long)a0 recoveryMask:(unsigned long long)a1;
- (void)setAttentionEventMask:(unsigned long long)a0;

@end

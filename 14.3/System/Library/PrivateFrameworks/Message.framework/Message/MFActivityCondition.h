@class EFCancelationToken, NSString, EFObservable;
@protocol EFScheduler, MFActivityCondition;

@interface MFActivityCondition : NSObject <MFActivityConditionBuilder, MFActivityCondition>

@property (class, readonly, nonatomic) id<MFActivityCondition> alwaysSatisfiedCondition;

@property (nonatomic) BOOL requireExternalPower;
@property (nonatomic) BOOL requireWiFi;
@property (nonatomic) BOOL requireScreenLocked;
@property (nonatomic) BOOL requireLowPowerModeDisabled;
@property (nonatomic) float minBatteryLevel;
@property (nonatomic) long long maxThermalPressureLevel;
@property (nonatomic, getter=isSatisfied) BOOL satisfied;
@property (retain, nonatomic) EFCancelationToken *cancellationToken;
@property (retain, nonatomic) id<EFScheduler> scheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) EFObservable *conditionsObservable;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_isValidConfiguration;
- (void)dealloc;
- (id)initWithBuilder:(id /* block */)a0;

@end

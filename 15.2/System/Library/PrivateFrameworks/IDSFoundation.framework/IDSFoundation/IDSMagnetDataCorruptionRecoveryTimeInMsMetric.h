@class NSDictionary, NSString;

@interface IDSMagnetDataCorruptionRecoveryTimeInMsMetric : NSObject <CUTCoreAnalyticsMetric>

@property (readonly, nonatomic) long long recoveryTime;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRecoveryTime:(long long)a0;

@end

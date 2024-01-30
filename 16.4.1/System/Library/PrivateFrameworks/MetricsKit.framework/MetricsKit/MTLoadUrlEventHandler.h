@class NSString;
@protocol MTLoadUrlEventHandlerDelegate;

@interface MTLoadUrlEventHandler : MTEventHandler <MTPerfBaseMeasurementTransformation>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MTLoadUrlEventHandlerDelegate> delegate;

- (id)eventType;
- (id)knownFields;
- (id)metricsDataWithPerfMeasurement:(id)a0;
- (id)dnsServersIPAddresses:(id)a0;
- (id)eventVersion:(id)a0;
- (id)xpSamplingPercentageUsers:(id)a0;
- (id)xpSessionDuration:(id)a0;

@end

@class NSString;
@protocol MTFlexiblePerfEventHandlerDelegate;

@interface MTFlexiblePerfEventHandler : MTEventHandler <MTPerfBaseMeasurementTransformation>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MTFlexiblePerfEventHandlerDelegate> delegate;

- (id)knownFields;
- (id)metricsDataWithEventType:(id)a0 eventData:(id)a1;
- (BOOL)mtIncludeBaseFields;
- (id)metricsDataWithPerfMeasurement:(id)a0;
- (id)xpSamplingPercentage:(id)a0;

@end

@class NSArray, NSString, NSMutableDictionary, NSMutableArray;
@protocol MTPerfBaseMeasurementTransformation;

@interface MTPerfBaseMeasurement : NSObject <MTPerfBaseMeasurementData> {
    NSMutableArray *_additionalData;
    NSArray *_eventData;
}

@property (readonly, copy, nonatomic) NSArray *eventData;
@property (readonly, copy, nonatomic) NSArray *additionalFields;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableDictionary *timestamps;
@property (retain, nonatomic) NSMutableDictionary *measurementSpecificData;
@property (weak, nonatomic) id<MTPerfBaseMeasurementTransformation> measurementTransformer;

- (void)addFields:(id)a0;
- (void).cxx_destruct;
- (id)record;
- (id)metricsData;
- (id)initWithMeasurementTransformer:(id)a0 eventData:(id)a1;
- (id)getAdditionalData;
- (void)addFieldsWithDictionary:(id)a0;
- (void)addFieldsWithPromise:(id)a0;

@end

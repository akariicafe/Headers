@class NSArray, PBCodable, _TtC13WiFiAnalytics21WANWActivityTransform;

@interface WANWActivityStatistics : NSObject {
    BOOL _fromInitWithPBCodableData;
}

@property (retain, nonatomic) PBCodable *awdReport;
@property (nonatomic) unsigned int awdMetricID;
@property (retain, nonatomic) _TtC13WiFiAnalytics21WANWActivityTransform *obj;
@property (retain) NSArray *activityUUIDs;
@property (retain) NSArray *externallyVisibleActivityUUIDs;

- (void).cxx_destruct;
- (id)initWithPBCodableData:(id)a0;
- (id)getTransformedFlattened:(int)a0;
- (id)getTransformedFlattenedFrom:(id)a0 style:(int)a1 index:(unsigned int)a2;
- (id)initWithWAActivityReport:(const void *)a0 length:(unsigned long long)a1;
- (id)expandKeyNameLengths:(id)a0;
- (id)getTransformedFlattenedFrom:(id)a0 style:(int)a1;

@end

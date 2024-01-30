@class NSArray, PBCodable;

@interface WANWActivityStatistics : NSObject {
    BOOL _fromInitWithPBCodableData;
}

@property (retain, nonatomic) PBCodable *awdReport;
@property (nonatomic) unsigned int awdMetricID;
@property (retain) NSArray *activityUUIDs;
@property (retain) NSArray *externallyVisibleActivityUUIDs;

- (void).cxx_destruct;
- (id)initWithPBCodableData:(id)a0;
- (id)initWithWAActivityReport:(const void *)a0 length:(unsigned long long)a1;

@end

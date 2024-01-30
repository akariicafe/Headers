@class PBCodable;

@interface NWActivityEmptyTrigger : NSObject

@property (retain, nonatomic) PBCodable *awdReport;
@property (nonatomic) unsigned int awdMetricID;

- (void).cxx_destruct;
- (id)initWithPBCodableData:(id)a0;

@end

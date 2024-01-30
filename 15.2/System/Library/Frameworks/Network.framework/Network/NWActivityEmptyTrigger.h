@class PBCodable;

@interface NWActivityEmptyTrigger : NSObject

@property (retain, nonatomic) PBCodable *awdReport;
@property (nonatomic) unsigned int awdMetricID;

- (id)initWithPBCodableData:(id)a0;
- (void).cxx_destruct;

@end

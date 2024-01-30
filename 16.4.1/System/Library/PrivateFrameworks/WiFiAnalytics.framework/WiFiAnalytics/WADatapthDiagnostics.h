@class PBCodable;

@interface WADatapthDiagnostics : NSObject

@property (retain, nonatomic) PBCodable *awdReport;
@property (nonatomic) unsigned int awdMetricID;
@property (readonly, nonatomic) int action;

- (void).cxx_destruct;
- (id)initWithWADatapthDiagnosticsReport:(const void *)a0 length:(unsigned long long)a1;

@end

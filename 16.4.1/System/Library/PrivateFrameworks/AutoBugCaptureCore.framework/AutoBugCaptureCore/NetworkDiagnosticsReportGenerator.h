@class NSMutableDictionary, NSDictionary, NetDiagnosticsShim, NSDate, NSString;

@interface NetworkDiagnosticsReportGenerator : DiagnosticReportGenerator <NetDiagnosticsShimDelegate>

@property (retain, nonatomic) NetDiagnosticsShim *netDiags;
@property (retain, nonatomic) NSDictionary *netDiagsResults;
@property (retain, nonatomic) NSDate *reportStart;
@property (retain, nonatomic) NSMutableDictionary *options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)netDiagnosticTaskStatusChangedFor:(id)a0 toStatus:(int)a1;
- (id)createDefaultTaskDictionaryWithTaskName:(const char *)a0;
- (BOOL)startNetDiagnosticsTaskWithReply:(id /* block */)a0;
- (BOOL)startReportGeneration;

@end

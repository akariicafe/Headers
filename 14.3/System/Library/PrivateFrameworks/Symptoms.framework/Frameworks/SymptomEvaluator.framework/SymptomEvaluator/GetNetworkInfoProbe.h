@class NSMutableArray;

@interface GetNetworkInfoProbe : NetDiagnosticProbe {
    NSMutableArray *_probeOutputFilePaths;
}

@property (nonatomic) id /* block */ completionBlock;

- (void)stopTest;
- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)startNetDiagnosticsTask:(id /* block */)a0;
- (id)probeOutputFilePaths;
- (void)netDiagnosticTaskStatusChangedFor:(id)a0 toStatus:(int)a1;

@end

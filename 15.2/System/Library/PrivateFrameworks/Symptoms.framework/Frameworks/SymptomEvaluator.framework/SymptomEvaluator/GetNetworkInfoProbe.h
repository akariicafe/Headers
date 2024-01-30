@class NSMutableArray;

@interface GetNetworkInfoProbe : NetDiagnosticProbe {
    NSMutableArray *_probeOutputFilePaths;
}

@property (nonatomic) id /* block */ completionBlock;

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stopTest;
- (BOOL)startNetDiagnosticsTask:(id /* block */)a0;
- (id)probeOutputFilePaths;
- (void)netDiagnosticTaskStatusChangedFor:(id)a0 toStatus:(int)a1;

@end

@class NSString, NSObject;
@protocol OS_dispatch_source;

@interface TCPDumpProbe : NetDiagnosticProbe

@property (retain, nonatomic) NSObject<OS_dispatch_source> *tcpDumpTimer;
@property (nonatomic) id /* block */ tcpDumpCompletedBlock;
@property double duration;
@property (retain, nonatomic) NSString *destinationPath;

- (void)stopTest;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (id)probeOutputFilePaths;
- (BOOL)startNetDiagnosticsTask:(id /* block */)a0;
- (void)startTCPDumpWithDuration:(double)a0 destinationPath:(id)a1 tcpDumpStarted:(id /* block */)a2 tcpDumpCompleted:(id /* block */)a3;
- (BOOL)stopNetDiagnosticsTask:(id /* block */)a0;

@end

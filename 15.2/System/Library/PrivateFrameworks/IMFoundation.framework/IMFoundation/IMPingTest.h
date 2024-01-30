@class NSString, NSObject;
@protocol OS_dispatch_source;

@interface IMPingTest : NSObject {
    NSString *_address;
    BOOL _usesWifi;
    id _collector;
    BOOL _isRunning;
    NSObject<OS_dispatch_source> *_sendTimer;
    NSObject<OS_dispatch_source> *_socketReadSource;
}

@property (readonly, nonatomic) double secondsToRun;

- (id)pingStats:(double)a0;
- (id)initWithAddress:(id)a0 wifi:(BOOL)a1;
- (BOOL)writeResultsToFile:(id)a0 error:(id *)a1;
- (void)startWithTimeout:(double)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
- (int)_setupAndPerformPing:(double)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
- (void)_setupReadSource:(int)a0 address:(struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; })a1 icmID:(unsigned short)a2 queue:(id)a3 completionHander:(id /* block */)a4;
- (void)_doPingWithSocket:(int)a0 address:(struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; })a1 timeToRunTestInSeconds:(double)a2 pingTimeout:(double)a3 queue:(id)a4 completionHandler:(id /* block */)a5;
- (double)longTimeInterval;
- (void).cxx_destruct;
- (id)pingStats;
- (void)dealloc;
- (void)stop;

@end

@class NSDate, NSObject;
@protocol OS_tcp_connection;

@interface TCPConnectionProbe : TestProbe {
    NSObject<OS_tcp_connection> *_connection;
    BOOL _connected;
    BOOL _shouldSendReply;
    NSDate *_startTime;
    double _elapsedTime;
}

- (void).cxx_destruct;
- (void)testConection:(id)a0 port:(unsigned long long)a1 timeout:(double)a2 interfaceName:(id)a3 reply:(id /* block */)a4;
- (void)cancelTest:(id /* block */)a0;

@end

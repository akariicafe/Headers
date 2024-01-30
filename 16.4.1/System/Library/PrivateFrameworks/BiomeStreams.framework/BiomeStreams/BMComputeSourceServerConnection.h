@class BMComputeSourceServer, BMProcess, NSString;

@interface BMComputeSourceServerConnection : NSObject <BMComputeSourceServer>

@property (readonly, weak, nonatomic) BMComputeSourceServer *server;
@property (readonly, nonatomic) BMProcess *clientProcess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendEventWithStreamIdentifier:(id)a0 timestamp:(id)a1 signpostID:(unsigned long long)a2 eventData:(id)a3;
- (id)initWithServer:(id)a0 clientProcess:(id)a1;
- (void).cxx_destruct;

@end

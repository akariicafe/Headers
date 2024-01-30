@class BMComputeSourceServer, NSSet, NSString;

@interface BMComputeSourceServerConnection : NSObject <BMComputeSourceServer>

@property (readonly, weak, nonatomic) BMComputeSourceServer *server;
@property (readonly, nonatomic) NSSet *authorizedStreams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendEventWithStreamIdentifier:(id)a0 timestamp:(id)a1 signpostID:(unsigned long long)a2 eventData:(id)a3;
- (void).cxx_destruct;
- (id)initWithServer:(id)a0 authorizedStreams:(id)a1;

@end

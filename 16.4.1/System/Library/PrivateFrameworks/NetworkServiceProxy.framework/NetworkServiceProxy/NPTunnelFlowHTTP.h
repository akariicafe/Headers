@class NSNumber, NSMutableData, NSURL;

@interface NPTunnelFlowHTTP : NPTunnelFlow

@property (copy) id /* block */ postCompletionHandler;
@property BOOL receivedHeaders;
@property (retain) NSNumber *responseContentLength;
@property BOOL responseSuccess;
@property (retain) NSMutableData *responseData;
@property (retain) NSURL *url;

- (void).cxx_destruct;
- (void)postData:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)closeClientFlowWithError:(int)a0;
- (id)initWithTunnel:(id)a0 URL:(id)a1 extraFlowProperties:(id)a2;
- (BOOL)isClientFlowClosed;
- (void)sendDataToClient:(id)a0 fromTunnel:(BOOL)a1;

@end

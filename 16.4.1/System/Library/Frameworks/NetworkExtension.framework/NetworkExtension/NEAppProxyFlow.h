@class NEFlowMetaData, NSString, NSData, NSObject;
@protocol OS_dispatch_queue, OS_nw_interface;

@interface NEAppProxyFlow : NSObject {
    struct _NEFlow { } *_flow;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_nw_interface> *__networkInterface;
}

@property BOOL isBound;
@property (retain) NSData *applicationData;
@property (readonly) NEFlowMetaData *metaData;
@property (copy) NSObject<OS_nw_interface> *networkInterface;
@property (readonly) NSString *remoteHostname;

- (void)setMetadata:(id)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (void)closeReadWithError:(id)a0;
- (void)closeWriteWithError:(id)a0;
- (id)initWithNEFlow:(struct _NEFlow { } *)a0 queue:(id)a1;
- (void)openWithLocalEndpoint:(id)a0 completionHandler:(id /* block */)a1;

@end

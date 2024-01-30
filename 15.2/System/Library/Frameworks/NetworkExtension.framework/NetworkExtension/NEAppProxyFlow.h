@class NEFlowMetaData, NSString, NSData, NSObject;
@protocol OS_dispatch_queue, OS_nw_interface;

@interface NEAppProxyFlow : NSObject

@property struct _NEFlow { } *flow;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSObject<OS_nw_interface> *_networkInterface;
@property BOOL isBound;
@property (retain) NSData *applicationData;
@property (readonly) NEFlowMetaData *metaData;
@property (copy) NSObject<OS_nw_interface> *networkInterface;
@property (readonly) NSString *remoteHostname;

+ (id)errorForFlowError:(long long)a0;
+ (struct __CFError { } *)convertFlowErrorToCFError:(id)a0;
+ (id)copyRemoteEndpointFromFlow:(struct _NEFlow { } *)a0;

- (void)setMetadata:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithNEFlow:(struct _NEFlow { } *)a0 queue:(id)a1;
- (void)clearEventHandlers;
- (void)openWithLocalEndpoint:(id)a0 completionHandler:(id /* block */)a1;
- (void)closeReadWithError:(id)a0;
- (void)closeWriteWithError:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;

@end

@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface OS_xpc_datastore_publisher : OS_xpc_datastore_object <XDS_xpc_datastore_publisher> {
    NSObject<OS_dispatch_queue> *pending_work_dq;
    NSObject<OS_dispatch_queue> *dq;
    id /* block */ publish_data;
    unsigned char activated : 1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyCurrentStateWithReqType:(unsigned long long)a0;

@end

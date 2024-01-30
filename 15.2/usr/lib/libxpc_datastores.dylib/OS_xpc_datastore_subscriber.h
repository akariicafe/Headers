@class NSString;

@interface OS_xpc_datastore_subscriber : OS_xpc_datastore_object <XDS_xpc_datastore_subscriber> {
    unsigned int recvp;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)copyCurrentStateWithReqType:(unsigned long long)a0;

@end

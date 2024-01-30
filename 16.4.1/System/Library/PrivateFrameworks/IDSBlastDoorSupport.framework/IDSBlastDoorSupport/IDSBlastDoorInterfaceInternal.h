@interface IDSBlastDoorInterfaceInternal : NSObject {
    void /* unknown type, empty encoding */ bd;
}

- (void)unpackCommandResponsePayload:(id)a0 resultHandler:(id /* block */)a1;
- (void)unpackCommandWebTunnelResponsePayload:(id)a0 resultHandler:(id /* block */)a1;
- (void)unpackGeneralCommandPayload:(id)a0 resultHandler:(id /* block */)a1;
- (void)unpackPayloadDictionary:(id)a0 resultHandler:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;

@end

@interface IDSBlastDoorInterface : NSObject {
    void /* unknown type, empty encoding */ bd;
}

- (void)unpackPayloadDictionary:(id)a0 resultHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)unpackCommandWebTunnelResponsePayload:(id)a0 resultHandler:(id /* block */)a1;
- (id)init;
- (void)unpackCommandResponsePayload:(id)a0 resultHandler:(id /* block */)a1;
- (void)unpackGeneralCommandPayload:(id)a0 resultHandler:(id /* block */)a1;

@end

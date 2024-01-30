@class NSMutableDictionary, NSObject;
@protocol OS_nw_interpose;

@interface NEFilterPacketExtensionProviderContext : NEFilterExtensionProviderContext {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain) NSObject<OS_nw_interpose> *nw_interpose;
@property (retain) NSMutableDictionary *interposes;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void).cxx_destruct;
- (void)dealloc;
- (void)interposeHandleFlowEvent:(int)a0 interface:(id)a1 flow_id:(unsigned char[16])a2 nexus_instance:(unsigned char[16])a3 nexus_port:(unsigned int)a4 key:(void *)a5 key_length:(unsigned int)a6;
- (BOOL)interposeClaimWithUUID:(id)a0;
- (id)extensionPoint;
- (void)stopWithReason:(int)a0;
- (Class)requiredProviderSuperClass;
- (void)startFilterWithOptions:(id)a0 completionHandler:(id /* block */)a1;

@end

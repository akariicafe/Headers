@class NSMutableDictionary, NSObject;
@protocol OS_nw_interpose;

@interface NEFilterPacketExtensionProviderContext : NEFilterExtensionProviderContext {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_nw_interpose> *_nw_interpose;
    NSMutableDictionary *_interposes;
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (id)extensionPoint;
- (void)dealloc;
- (void).cxx_destruct;
- (void)stopWithReason:(int)a0;
- (Class)requiredProviderSuperClass;
- (void)startFilterWithOptions:(id)a0 completionHandler:(id /* block */)a1;

@end

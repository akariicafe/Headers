@class NSString, NSObject;
@protocol OS_nw_endpoint;

@interface NWConcrete_nw_authentication_protection_space : NSObject <OS_nw_authentication_protection_space> {
    NSObject<OS_nw_endpoint> *endpoint;
    unsigned char is_proxy : 1;
    unsigned char __pad_bits : 7;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end

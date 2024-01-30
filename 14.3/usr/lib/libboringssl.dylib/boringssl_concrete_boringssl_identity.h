@class NSString, NSObject;
@protocol OS_dispatch_data, OS_sec_array, OS_sec_identity, OS_dispatch_queue;

@interface boringssl_concrete_boringssl_identity : NSObject <OS_boringssl_identity> {
    struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *private_key;
    NSObject<OS_sec_array> *certificates;
    NSObject<OS_sec_identity> *identity;
    id /* block */ sign_block;
    id /* block */ decrypt_block;
    NSObject<OS_dispatch_queue> *queue;
    BOOL private_key_operation_complete;
    NSObject<OS_dispatch_data> *signature_result;
    NSObject<OS_dispatch_data> *decryption_result;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;

@end

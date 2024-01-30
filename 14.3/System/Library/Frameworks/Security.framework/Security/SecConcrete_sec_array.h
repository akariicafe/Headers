@class NSString, NSObject;
@protocol OS_xpc_object;

@interface SecConcrete_sec_array : NSObject <OS_sec_array> {
    NSObject<OS_xpc_object> *xpc_array;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end

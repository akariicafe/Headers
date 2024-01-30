@class NSString, NSObject;
@protocol OS_xpc_object;

@interface SecConcrete_sec_protocol_configuration : NSObject <OS_sec_protocol_configuration> {
    NSObject<OS_xpc_object> *dictionary;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;

@end

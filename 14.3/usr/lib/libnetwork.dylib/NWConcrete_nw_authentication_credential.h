@class NSString, NSObject;
@protocol OS_xpc_object, OS_sec_identity;

@interface NWConcrete_nw_authentication_credential : NSObject <OS_nw_authentication_credential> {
    int type;
    char *username;
    char *password;
    NSObject<OS_sec_identity> *identity;
    NSObject<OS_xpc_object> *valid_authentication_types;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;

@end

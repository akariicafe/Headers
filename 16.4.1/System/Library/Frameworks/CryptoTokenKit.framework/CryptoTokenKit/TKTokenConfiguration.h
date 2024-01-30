@class TKTokenID, NSString, NSArray, NSXPCInterface, NSData, TKTokenConfigurationConnection;

@interface TKTokenConfiguration : NSObject {
    TKTokenConfigurationConnection *_configurationConnection;
    NSArray *_keychainItems;
}

@property (class, readonly, nonatomic) NSXPCInterface *interfaceForProtocol;
@property (class, nonatomic) BOOL _hasSeparateKeysAndCertificatesObjectIDSpace;

@property (readonly, nonatomic) TKTokenID *tokenID;
@property (readonly, nonatomic) NSString *instanceID;
@property (copy, nonatomic) NSData *configurationData;
@property (copy, nonatomic) NSArray *keychainItems;

- (id)beginTransaction;
- (void).cxx_destruct;
- (id)certificateForObjectID:(id)a0 error:(id *)a1;
- (id)initWithTokenID:(id)a0 configurationConnection:(id)a1;
- (id)keyForObjectID:(id)a0 error:(id *)a1;

@end

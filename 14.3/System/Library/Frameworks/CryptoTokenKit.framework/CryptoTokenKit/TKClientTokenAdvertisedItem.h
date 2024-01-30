@class NSString, NSDictionary, NSData, TKClientTokenSession;

@interface TKClientTokenAdvertisedItem : NSObject {
    id _secRef;
}

@property (readonly, nonatomic) TKClientTokenSession *session;
@property (readonly, nonatomic) unsigned long long keyUsage;
@property (readonly, nonatomic) NSDictionary *keychainAttributes;
@property (readonly, nonatomic) NSData *objectID;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) id keychainClass;
@property (readonly, nonatomic) struct __SecKey { } *keyRef;
@property (readonly, nonatomic) struct __SecCertificate { } *certificateRef;
@property (readonly, nonatomic) struct __SecIdentity { } *identityRef;

- (void).cxx_destruct;
- (id)initWithSession:(id)a0 keychainAttributes:(id)a1 secRef:(id)a2;

@end

@class NGMFullPrekey, NGMPublicDeviceIdentity;

@interface NGMKeyRollingTicket : NSObject

@property (readonly, nonatomic) NGMFullPrekey *prekey;
@property (readonly, nonatomic) NGMPublicDeviceIdentity *registrationInfo;

- (void).cxx_destruct;
- (id)prekeyData;
- (id)publicDeviceIdentity;
- (id)identityData;
- (id)initTicketWithSigningKey:(id)a0 error:(id *)a1;

@end

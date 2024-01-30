@class NGMFullPrekey, NGMPublicDeviceIdentity;

@interface NGMKeyRollingTicket : NSObject

@property (readonly, nonatomic) NGMFullPrekey *prekey;
@property (readonly, nonatomic) NGMPublicDeviceIdentity *registrationInfo;

- (id)prekeyData;
- (id)identityData;
- (void).cxx_destruct;
- (id)publicDeviceIdentity;
- (id)initTicketWithSigningKey:(id)a0 error:(id *)a1;

@end

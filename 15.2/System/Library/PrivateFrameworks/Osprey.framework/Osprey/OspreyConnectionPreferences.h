@class NSString, OspreyKeychain, NSData, NSDate, NSNumber;

@interface OspreyConnectionPreferences : NSObject {
    OspreyKeychain *_keychain;
    BOOL _certificateDataFetched;
    NSData *_certificateData;
    NSData *_deviceAttestationData;
}

@property (copy, nonatomic) NSString *connectionHost;
@property (copy, nonatomic) NSNumber *deviceAuthenticationVersion;
@property (copy, nonatomic) NSNumber *deviceAttestionVersion;
@property (retain, nonatomic) NSData *certificateData;
@property (copy, nonatomic) NSDate *deviceAttestionExpireOn;
@property (readonly, nonatomic) BOOL isDeviceAttestionExpired;

- (void).cxx_destruct;
- (void)deleteAll;
- (id)dictionaryRepresentation;
- (void)deleteCertificateData;
- (id)initWithDictionary:(id)a0 keychain:(id)a1;
- (id)initWithConnectionHost:(id)a0 keychain:(id)a1;
- (void)deleteDeviceAttestationData;
- (id)_certificateDataKey;
- (id)_deviceAttestationDataKey;
- (void)resetCachedDeviceAttestation;
- (BOOL)setDeviceAttestationData:(id)a0 withExpiration:(id)a1;
- (id)deviceAttestationData;

@end

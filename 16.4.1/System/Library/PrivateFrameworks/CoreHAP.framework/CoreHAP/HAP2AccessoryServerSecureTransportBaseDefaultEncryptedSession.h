@class NSString;

@interface HAP2AccessoryServerSecureTransportBaseDefaultEncryptedSession : NSObject <HAPEncryptedSession>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)decryptData:(id)a0 additionalAuthenticatedData:(id)a1 error:(id *)a2;
- (id)encryptData:(id)a0 additionalAuthenticatedData:(id)a1 error:(id *)a2;

@end

@class NSData;

@interface AMSBAAKeychainItems : NSObject

@property (copy) NSData *BAACert;
@property struct __SecKey { } *BIKKeyRef;
@property (copy) NSData *IntermediateRootCert;

- (void).cxx_destruct;

@end

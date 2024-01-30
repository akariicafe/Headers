@class NSData, NSNumber;

@interface TKTokenKeychainCertificate : TKTokenKeychainItem

@property (retain) NSData *subject;
@property (retain) NSData *issuer;
@property (retain) NSData *serialNumber;
@property (retain) NSData *subjectKeyID;
@property (retain) NSData *publicKeyHash;
@property (retain) NSNumber *certificateType;
@property (retain) NSNumber *certificateEncoding;
@property (readonly, copy) NSData *data;

- (id)keychainAttributes;
- (void).cxx_destruct;
- (id)encodedObjectID;
- (id)initWithCertificate:(struct __SecCertificate { } *)a0 objectID:(id)a1;
- (id)initWithItemInfo:(id)a0;

@end

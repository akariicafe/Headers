@class NSData, NSString;

@interface ASPublicKeyCredentialBase : NSObject <ASPublicKeyCredential>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long attachment;
@property (readonly, copy, nonatomic) NSData *rawClientDataJSON;
@property (readonly, copy, nonatomic) NSData *credentialID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCredentialID:(id)a0 rawClientDataJSON:(id)a1 attachment:(long long)a2;

@end

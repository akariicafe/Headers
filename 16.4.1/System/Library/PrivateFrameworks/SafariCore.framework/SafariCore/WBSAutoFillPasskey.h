@class NSString, WBSPublicKeyCredentialIdentifier, NSUUID;

@interface WBSAutoFillPasskey : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *username;
@property (readonly, nonatomic) NSString *relyingPartyIdentifier;
@property (readonly, copy, nonatomic) WBSPublicKeyCredentialIdentifier *identifier;
@property (readonly, copy, nonatomic) NSUUID *operationUUID;
@property (readonly, nonatomic) BOOL shouldRequireUserVerification;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithUsername:(id)a0 relyingPartyIdentifier:(id)a1 identifier:(id)a2 operationUUID:(id)a3 shouldRequireUserVerification:(BOOL)a4;

@end

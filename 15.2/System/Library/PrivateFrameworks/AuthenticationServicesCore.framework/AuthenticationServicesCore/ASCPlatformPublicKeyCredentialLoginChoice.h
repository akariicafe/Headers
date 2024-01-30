@class NSString, NSData;

@interface ASCPlatformPublicKeyCredentialLoginChoice : NSObject <ASCLoginChoiceProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSData *userHandle;
@property (readonly, copy, nonatomic) NSString *relyingPartyIdentifier;
@property (readonly, nonatomic) BOOL isRegistrationRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initRegistrationChoiceWithOptions:(id)a0;
- (id)initWithName:(id)a0 displayName:(id)a1 userHandle:(id)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 displayName:(id)a1 userHandle:(id)a2 relyingPartyIdentifier:(id)a3;
- (id)_initAsRegistrationChoice:(BOOL)a0 withName:(id)a1 displayName:(id)a2 userHandle:(id)a3 relyingPartyIdentifier:(id)a4;

@end

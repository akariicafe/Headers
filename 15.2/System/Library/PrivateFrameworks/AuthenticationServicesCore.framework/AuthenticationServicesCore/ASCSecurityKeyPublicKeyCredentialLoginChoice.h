@class NSString, NSData;

@interface ASCSecurityKeyPublicKeyCredentialLoginChoice : NSObject <ASCLoginChoiceProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSData *userHandle;
@property (readonly, nonatomic) long long loginChoiceKind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initRegistrationChoiceWithOptions:(id)a0;
- (id)initAssertionPlaceholderChoice;
- (id)initWithName:(id)a0 displayName:(id)a1 userHandle:(id)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithKind:(long long)a0 name:(id)a1 displayName:(id)a2 userHandle:(id)a3;
- (id)initRegistrationChoice;

@end

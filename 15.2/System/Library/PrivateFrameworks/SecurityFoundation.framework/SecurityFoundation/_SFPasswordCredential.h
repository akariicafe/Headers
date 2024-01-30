@class NSString;

@interface _SFPasswordCredential : _SFCredential {
    NSString *_username;
    NSString *_password;
}

@property (copy, nonatomic, getter=_cachedPassword) NSString *password;
@property (copy, nonatomic) NSString *username;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)initWithUsername:(id)a0 password:(id)a1 primaryServiceIdentifier:(id)a2 supplementaryServiceIdentifiers:(id)a3;
- (id)descriptionShowingPassword:(BOOL)a0;
- (id)initWithUsername:(id)a0 password:(id)a1 primaryServiceIdentifier:(id)a2;
- (id)_initWithUsername:(id)a0 primaryServiceIdentifier:(id)a1 supplementaryServiceIdentifiers:(id)a2;
- (void)usePasswordWithHandler:(id /* block */)a0;

@end

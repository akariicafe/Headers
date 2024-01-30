@class NSString, NSData;

@interface SBSApplicationShortcutContactIcon : SBSApplicationShortcutIcon

@property (readonly, nonatomic) NSString *contactIdentifier;
@property (readonly, nonatomic) NSString *firstName;
@property (readonly, nonatomic) NSString *lastName;
@property (readonly, nonatomic) NSData *imageData;

- (id)initWithXPCDictionary:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)_initForSubclass;
- (id)initWithFirstName:(id)a0 lastName:(id)a1 imageData:(id)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithContactIdentifier:(id)a0;
- (id)initWithFirstName:(id)a0 lastName:(id)a1;
- (unsigned long long)hash;

@end

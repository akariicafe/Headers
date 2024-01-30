@class NSString, NSData;

@interface SBSApplicationShortcutContactIcon : SBSApplicationShortcutIcon

@property (readonly, nonatomic) NSString *contactIdentifier;
@property (readonly, nonatomic) NSString *firstName;
@property (readonly, nonatomic) NSString *lastName;
@property (readonly, nonatomic) NSData *imageData;

- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithContactIdentifier:(id)a0;
- (id)initWithFirstName:(id)a0 lastName:(id)a1;
- (id)_initForSubclass;
- (id)initWithFirstName:(id)a0 lastName:(id)a1 imageData:(id)a2;

@end

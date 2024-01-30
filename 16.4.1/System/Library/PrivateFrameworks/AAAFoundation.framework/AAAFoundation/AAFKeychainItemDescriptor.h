@class NSString;

@interface AAFKeychainItemDescriptor : NSObject

@property (nonatomic) unsigned long long itemClass;
@property (nonatomic) unsigned long long itemAccessible;
@property (copy, nonatomic) NSString *account;
@property (copy, nonatomic) NSString *service;
@property (copy, nonatomic) NSString *server;
@property (copy, nonatomic) NSString *securityDomain;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *accessGroup;
@property (nonatomic) unsigned long long invisible;
@property (nonatomic) unsigned long long synchronizable;
@property (nonatomic) unsigned long long useDataProtection;
@property (nonatomic) unsigned long long sysBound;

- (id)initWithAttributes:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)attributes;
- (void).cxx_destruct;
- (unsigned long long)_accessibleWithKeychainAccessible:(id)a0;
- (unsigned long long)_classWithKeychainClass:(id)a0;
- (id)_keychainAccessibleWithAccessible:(unsigned long long)a0;
- (id)_keychainClassWithClass:(unsigned long long)a0;
- (id)_objectForOptionalBool:(unsigned long long)a0;
- (unsigned long long)_optionalValueFromObject:(id)a0;

@end

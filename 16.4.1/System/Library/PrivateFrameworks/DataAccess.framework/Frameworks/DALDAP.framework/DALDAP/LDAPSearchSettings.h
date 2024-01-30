@class NSString;

@interface LDAPSearchSettings : NSObject

@property (retain, nonatomic) NSString *searchDescription;
@property (retain, nonatomic) NSString *searchBase;
@property (nonatomic) unsigned long long scope;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)settingsDict;
- (BOOL)hasSameScopeAndBaseAsOther:(id)a0;
- (id)initWithSettingsDict:(id)a0;

@end

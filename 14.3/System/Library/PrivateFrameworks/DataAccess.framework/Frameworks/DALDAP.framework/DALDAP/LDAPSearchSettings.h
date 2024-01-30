@class NSString;

@interface LDAPSearchSettings : NSObject

@property (retain, nonatomic) NSString *searchDescription;
@property (retain, nonatomic) NSString *searchBase;
@property (nonatomic) unsigned long long scope;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)settingsDict;
- (id)initWithSettingsDict:(id)a0;
- (BOOL)hasSameScopeAndBaseAsOther:(id)a0;

@end

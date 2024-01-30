@class NSString;

@interface LDAPSearchSettings : NSObject

@property (retain, nonatomic) NSString *searchDescription;
@property (retain, nonatomic) NSString *searchBase;
@property (nonatomic) unsigned long long scope;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)settingsDict;
- (id)initWithSettingsDict:(id)a0;
- (BOOL)hasSameScopeAndBaseAsOther:(id)a0;

@end

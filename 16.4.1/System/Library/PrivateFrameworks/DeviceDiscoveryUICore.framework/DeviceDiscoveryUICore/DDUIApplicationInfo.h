@class NSString;

@interface DDUIApplicationInfo : NSObject

@property (readonly, nonatomic) NSString *applicationID;
@property (readonly, nonatomic) NSString *serviceIdentifier;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *appName;
@property (readonly, nonatomic) unsigned long long adamID;
@property (readonly, nonatomic) NSString *bundleIDPrefixedServiceIdentifier;

- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithApplicationID:(id)a0 serviceIdentifier:(id)a1 bundleID:(id)a2 appName:(id)a3 adamID:(unsigned long long)a4;

@end

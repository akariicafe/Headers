@class NSURL;

@interface WFWordPressAccount : WFPasswordAccount

@property (copy, nonatomic) NSURL *endpointURL;

+ (unsigned long long)modelVersion;
+ (id)serviceID;
+ (id)localizedServiceName;
+ (BOOL)allowsMultipleAccounts;
+ (id)accountWithUsername:(id)a0 password:(id)a1 endpointURL:(id)a2;

- (void).cxx_destruct;
- (id)localizedName;
- (BOOL)isValid;
- (void)refreshWithCompletionHandler:(id /* block */)a0;
- (id)decodeValueForKey:(id)a0 withCoder:(id)a1 modelVersion:(unsigned long long)a2;

@end

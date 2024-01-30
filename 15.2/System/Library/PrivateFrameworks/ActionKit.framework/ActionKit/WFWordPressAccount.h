@class NSURL;

@interface WFWordPressAccount : WFPasswordAccount

@property (copy, nonatomic) NSURL *endpointURL;

+ (unsigned long long)modelVersion;
+ (id)serviceID;
+ (id)localizedServiceName;
+ (BOOL)allowsMultipleAccounts;
+ (id)accountWithUsername:(id)a0 password:(id)a1 endpointURL:(id)a2;
+ (void)loginWithUsername:(id)a0 password:(id)a1 blogURL:(id)a2 completionHandler:(id /* block */)a3;

- (id)localizedName;
- (void)refreshWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)isValid;
- (id)decodeValueForKey:(id)a0 withCoder:(id)a1 modelVersion:(unsigned long long)a2;

@end

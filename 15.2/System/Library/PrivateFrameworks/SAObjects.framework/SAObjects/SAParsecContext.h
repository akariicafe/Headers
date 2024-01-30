@class NSData, NSDictionary, NSString;

@interface SAParsecContext : SADomainObject

@property (copy, nonatomic) NSData *httpBody;
@property (copy, nonatomic) NSDictionary *httpHeaders;
@property (copy, nonatomic) NSString *httpMethod;
@property (copy, nonatomic) NSString *httpUrl;

+ (id)parsecContext;
+ (id)parsecContextWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end

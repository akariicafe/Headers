@class NSURL, NSDictionary, NSString;

@interface SACFScriptUrlInformation : SABaseAceObject

@property (copy, nonatomic) NSURL *downloadUrl;
@property (copy, nonatomic) NSDictionary *headerFields;
@property (copy, nonatomic) NSString *requestMethodType;

+ (id)scriptUrlInformation;
+ (id)scriptUrlInformationWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end

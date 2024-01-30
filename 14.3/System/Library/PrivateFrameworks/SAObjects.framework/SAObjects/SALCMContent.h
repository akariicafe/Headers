@class NSString, NSURL;

@interface SALCMContent : SADomainObject

@property (copy, nonatomic) NSString *canonicalId;
@property (copy, nonatomic) NSString *channelId;
@property (copy, nonatomic) NSURL *externalId;
@property (copy, nonatomic) NSString *title;

+ (id)contentWithDictionary:(id)a0 context:(id)a1;
+ (id)content;

- (id)groupIdentifier;
- (id)encodedClassName;

@end

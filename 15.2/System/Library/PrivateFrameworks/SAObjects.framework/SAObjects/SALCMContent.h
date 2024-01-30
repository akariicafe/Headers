@class NSString, NSURL;

@interface SALCMContent : SADomainObject

@property (copy, nonatomic) NSString *canonicalId;
@property (copy, nonatomic) NSString *channelId;
@property (copy, nonatomic) NSURL *externalId;
@property (copy, nonatomic) NSString *title;

+ (id)content;
+ (id)contentWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end

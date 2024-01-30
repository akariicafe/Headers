@class NSString, SAUIAppPunchOut;

@interface SAGKSourceLinkPod : SAGKPodView

@property (copy, nonatomic) NSString *linkText;
@property (retain, nonatomic) SAUIAppPunchOut *punchOut;

+ (id)sourceLinkPod;
+ (id)sourceLinkPodWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end

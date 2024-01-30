@class NSArray;

@interface SAGKWebLinkPod : SAGKPodView

@property (copy, nonatomic) NSArray *links;

+ (id)webLinkPod;
+ (id)webLinkPodWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end

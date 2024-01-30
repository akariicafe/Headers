@class NSString;

@interface SAGKDisambiguationPod : SAGKPodView

@property (copy, nonatomic) NSString *text;

+ (id)disambiguationPod;
+ (id)disambiguationPodWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end

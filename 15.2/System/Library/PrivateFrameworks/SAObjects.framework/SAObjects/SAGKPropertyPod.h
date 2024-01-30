@class NSArray;

@interface SAGKPropertyPod : SAGKPodView

@property (copy, nonatomic) NSArray *propertyList;

+ (id)propertyPod;
+ (id)propertyPodWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end

@class NSArray;

@interface SAGKVideoPod : SAGKPodView

@property (copy, nonatomic) NSArray *videos;

+ (id)videoPodWithDictionary:(id)a0 context:(id)a1;
+ (id)videoPod;

- (id)groupIdentifier;
- (id)encodedClassName;

@end

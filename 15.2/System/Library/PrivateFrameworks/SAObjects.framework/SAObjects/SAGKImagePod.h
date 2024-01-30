@class NSArray;

@interface SAGKImagePod : SAGKPodView

@property (copy, nonatomic) NSArray *images;

+ (id)imagePod;
+ (id)imagePodWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end

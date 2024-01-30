@class NSString;

@interface SAGKPodView : SAAceView

@property (copy, nonatomic) NSString *title;

+ (id)podView;
+ (id)podViewWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end

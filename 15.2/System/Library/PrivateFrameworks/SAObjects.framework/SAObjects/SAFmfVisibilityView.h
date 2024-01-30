@class NSURL;

@interface SAFmfVisibilityView : SAUISnippet

@property (copy, nonatomic) NSURL *searchContext;
@property (nonatomic) BOOL visible;

+ (id)visibilityView;
+ (id)visibilityViewWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end

@class SUScriptReview;

@interface SUScriptComposeReviewViewController : SUScriptViewController

@property (readonly) SUScriptReview *review;

+ (id)webScriptNameForKey:(const char *)a0;

- (id)init;
- (id)attributeKeys;
- (void)setReview:(id)a0;
- (id)_className;
- (id)scriptAttributeKeys;
- (id)newNativeViewController;
- (id)initWithScriptReview:(id)a0 clientInterface:(id)a1;

@end

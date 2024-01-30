@interface SnippetUI.VisualResponseProvider : NSObject

+ (id)transformModel:(id)a0 mode:(long long)a1 currentIdiom:(long long)a2;

- (id)init;
- (id)viewControllerForModel:(id)a0 mode:(long long)a1;
- (id)viewForModel:(id)a0 mode:(long long)a1 overload:(long long)a2;

@end

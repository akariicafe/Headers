@protocol FLSpecifierTapHandlerDelegate;

@interface FLSpecifierTapHandler : NSObject

@property (weak, nonatomic) id<FLSpecifierTapHandlerDelegate> delegate;

- (id)description;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_handleActionForItem:(id)a0 fromSpecifier:(id)a1 eventSource:(unsigned long long)a2 withCompletionHandler:(id /* block */)a3;
- (void)actionTapped:(id)a0 eventSource:(unsigned long long)a1 withCompletionHandler:(id /* block */)a2;

@end

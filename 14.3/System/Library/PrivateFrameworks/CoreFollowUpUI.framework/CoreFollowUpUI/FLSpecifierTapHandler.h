@protocol FLSpecifierTapHandlerDelegate;

@interface FLSpecifierTapHandler : NSObject

@property (weak, nonatomic) id<FLSpecifierTapHandlerDelegate> delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)startSpinnerForSpecifier:(id)a0;
- (void)_handleActionForItem:(id)a0 fromSpecifier:(id)a1 eventSource:(unsigned long long)a2 withCompletionHandler:(id /* block */)a3;
- (void)stopSpinnerForSpecifier:(id)a0;
- (void)actionTapped:(id)a0 eventSource:(unsigned long long)a1 withCompletionHandler:(id /* block */)a2;

@end

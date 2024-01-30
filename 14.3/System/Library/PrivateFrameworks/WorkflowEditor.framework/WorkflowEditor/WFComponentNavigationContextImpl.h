@class NSString, UIViewController, NSHashTable;

@interface WFComponentNavigationContextImpl : NSObject <WFComponentNavigationContext>

@property (readonly, nonatomic) NSHashTable *componentEditingSessions;
@property (readonly, weak, nonatomic) UIViewController *componentHostingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithViewController:(id)a0;
- (void)componentWillBeginEditingSession:(id)a0;
- (void)componentDidEndEditingSession:(id)a0;
- (void)cancelEditingSessionsWithCompletionHandler:(id /* block */)a0;

@end

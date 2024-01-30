@class SPUISearchViewController, NSString;

@interface SPUIPPTTypingHelper : NSObject

@property double timeSinceLastFire;
@property (retain) SPUISearchViewController *searchViewController;
@property (retain) NSString *queryString;
@property (retain) NSString *currentQueryString;
@property unsigned long long queryKind;
@property (copy) id /* block */ completion;

- (void)fire:(id)a0;
- (void).cxx_destruct;
- (id)initWithString:(id)a0 viewController:(id)a1 queryKind:(unsigned long long)a2 completion:(id /* block */)a3;

@end

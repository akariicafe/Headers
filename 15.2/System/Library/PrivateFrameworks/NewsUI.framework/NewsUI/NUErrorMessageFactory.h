@class FCNetworkReachability, NSString;

@interface NUErrorMessageFactory : NSObject <NUErrorMessageFactory>

@property (readonly, nonatomic) FCNetworkReachability *networkReachability;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithNetworkReachability:(id)a0;
- (void).cxx_destruct;
- (id)errorMessageForArticleView;
- (id)errorMessageForArticleViewWithOfflineReason:(long long)a0;
- (id)errorMessageForTitle:(id)a0 subtitle:(id)a1;

@end

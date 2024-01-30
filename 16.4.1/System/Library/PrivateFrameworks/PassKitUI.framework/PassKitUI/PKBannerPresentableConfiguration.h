@interface PKBannerPresentableConfiguration : NSObject

@property (copy, nonatomic) id /* block */ factory;
@property (copy, nonatomic) id /* block */ didStartHandler;
@property (copy, nonatomic) id /* block */ didFinishHandler;

- (void).cxx_destruct;

@end

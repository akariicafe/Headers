@interface HKOnboardingPage : NSObject

@property (readonly, nonatomic) long long sequencePage;
@property (nonatomic) BOOL lastPage;
@property (readonly, nonatomic) Class viewControllerClass;

- (void).cxx_destruct;
- (id)initWithViewControllerClass:(Class)a0 sequencePage:(long long)a1;

@end

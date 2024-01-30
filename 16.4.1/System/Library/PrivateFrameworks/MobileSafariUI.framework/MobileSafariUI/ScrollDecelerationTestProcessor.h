@interface ScrollDecelerationTestProcessor : ContentInteractionTestRunner

@property (nonatomic) int iterationsRemaining;
@property (nonatomic) long long state;

- (id)initWithTestName:(id)a0 browserController:(id)a1;
- (BOOL)performActionForPage:(id)a0;
- (BOOL)startPageAction:(id)a0;

@end

@interface OBNavigationBarDisplayState : NSObject

@property (nonatomic) double backgroundOpacity;
@property (nonatomic) double titleOpacity;

+ (id)displayStateForNavigationBar:(id)a0;

- (id)initWithNavigationBar:(id)a0;
- (void)applyState:(id)a0;

@end

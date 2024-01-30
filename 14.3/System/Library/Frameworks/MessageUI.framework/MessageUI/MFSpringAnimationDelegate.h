@class NSMutableArray;

@interface MFSpringAnimationDelegate : NSObject

@property (readonly, nonatomic) NSMutableArray *completionBlocks;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)init;
- (void).cxx_destruct;

@end

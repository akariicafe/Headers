@class NSMutableArray;

@interface MFSpringAnimationDelegate : NSObject

@property (readonly, nonatomic) NSMutableArray *completionBlocks;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;

@end

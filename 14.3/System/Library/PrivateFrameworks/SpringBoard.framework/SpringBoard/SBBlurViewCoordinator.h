@class NSArray, NSMutableDictionary;

@interface SBBlurViewCoordinator : NSObject {
    NSMutableDictionary *_mapStateToBlocks;
}

@property (readonly, nonatomic) NSArray *viewControllers;
@property (readonly, nonatomic, getter=isBlurred) BOOL blurred;
@property (readonly, nonatomic) unsigned long long state;

- (void)_setState:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithElementViewControllers:(id)a0;
- (void)setBlurred:(BOOL)a0 withAnimationFactory:(id)a1 completion:(id /* block */)a2;
- (void)_fireBlocksForState:(unsigned long long)a0;
- (void)addNotifyBlock:(id /* block */)a0 forState:(unsigned long long)a1;
- (void)removeNotifyBlock:(id /* block */)a0 forState:(unsigned long long)a1;

@end

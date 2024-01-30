@interface SKTransition : NSObject <NSCopying> {
    void *_skcTransitionNode;
}

@property (nonatomic) BOOL pausesIncomingScene;
@property (nonatomic) BOOL pausesOutgoingScene;

+ (id)revealDownWithDuration:(double)a0;
+ (id)revealUpWithDuration:(double)a0;
+ (id)revealLeftWithDuration:(double)a0;
+ (id)revealRightWithDuration:(double)a0;
+ (id)moveInDownWithDuration:(double)a0;
+ (id)moveInUpWithDuration:(double)a0;
+ (id)moveInLeftWithDuration:(double)a0;
+ (id)moveInRightWithDuration:(double)a0;
+ (id)pushDownWithDuration:(double)a0;
+ (id)pushUpWithDuration:(double)a0;
+ (id)pushLeftWithDuration:(double)a0;
+ (id)pushRightWithDuration:(double)a0;
+ (id)revealWithDirection:(long long)a0 duration:(double)a1;
+ (id)moveInWithDirection:(long long)a0 duration:(double)a1;
+ (id)pushWithDirection:(long long)a0 duration:(double)a1;
+ (id)fadeWithDuration:(double)a0;
+ (id)fadeWithColor:(id)a0 duration:(double)a1;
+ (id)crossFadeWithDuration:(double)a0;
+ (id)flipHorizontalWithDuration:(double)a0;
+ (id)flipVerticalWithDuration:(double)a0;
+ (id)doorsOpenHorizontalWithDuration:(double)a0;
+ (id)doorsOpenVerticalWithDuration:(double)a0;
+ (id)doorsCloseHorizontalWithDuration:(double)a0;
+ (id)doorsCloseVerticalWithDuration:(double)a0;
+ (id)doorwayWithDuration:(double)a0;
+ (id)transitionWithCIFilter:(id)a0 duration:(double)a1;

- (id)_filter;
- (double)_duration;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void *)_backingNode;

@end

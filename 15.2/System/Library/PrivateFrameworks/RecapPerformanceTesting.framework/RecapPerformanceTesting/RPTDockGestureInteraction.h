@interface RPTDockGestureInteraction : NSObject <RPTInteraction>

@property (nonatomic) unsigned long long gestureStyle;
@property (nonatomic) double amplitude;

- (void)invokeWithComposer:(id)a0 duration:(double)a1;
- (id)reversedInteraction;
- (id)interactionByScalingBy:(double)a0;
- (id)initWithGestureStyle:(unsigned long long)a0;

@end

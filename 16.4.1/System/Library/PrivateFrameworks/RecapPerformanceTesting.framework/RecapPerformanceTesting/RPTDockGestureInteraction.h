@interface RPTDockGestureInteraction : NSObject <RPTInteraction>

@property (nonatomic) unsigned long long gestureStyle;
@property (nonatomic) double amplitude;

- (id)initWithGestureStyle:(unsigned long long)a0;
- (id)interactionByScalingBy:(double)a0;
- (void)invokeWithComposer:(id)a0 duration:(double)a1;
- (id)reversedInteraction;

@end

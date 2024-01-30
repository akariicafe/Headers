@class NSString;
@protocol CAAnimationDelegate;

@interface _UIViewWeakCAAnimationDelegate : NSObject <CAAnimationDelegate> {
    struct { unsigned char delegateAnimationDidStart : 1; unsigned char delegateAnimationDidStopFinished : 1; } _flags;
}

@property (readonly, weak, nonatomic) id<CAAnimationDelegate> animationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)weakAnimationDelegate:(id)a0;

@end

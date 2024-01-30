@class NSString;

@interface SFTransitionCoordinatorKeyframeAnimation : NSObject <SFTransitionCoordinatorAnimation> {
    id /* block */ _animations;
    double _duration;
    double _startTime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invokeInContext:(id)a0;

@end

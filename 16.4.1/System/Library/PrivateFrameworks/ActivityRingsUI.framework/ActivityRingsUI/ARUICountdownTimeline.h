@class NSArray;
@protocol ARUICountdownAnimation;

@interface ARUICountdownTimeline : NSObject

@property (retain, nonatomic) id<ARUICountdownAnimation> prepareToAnimate;
@property (retain, nonatomic) NSArray *animations;
@property (retain, nonatomic) id<ARUICountdownAnimation> prepareToCancel;
@property (retain, nonatomic) NSArray *cancelAnimations;

- (void).cxx_destruct;

@end

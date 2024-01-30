@class NSArray, CALayer;

@interface WUIDynamicWeatherBackgroundInteractiveTransaction : NSObject

@property (nonatomic) double progress;
@property (retain, nonatomic) NSArray *layers;
@property (nonatomic) CALayer *toLayer;
@property (nonatomic) long long swipeDirection;

- (void).cxx_destruct;

@end

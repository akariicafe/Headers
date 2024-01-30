@class NSTimer, NSDate;

@interface VUINowPlayingTimerFeatureInfo : NSObject

@property (weak, nonatomic) NSTimer *repeatingTimer;
@property (weak, nonatomic) NSTimer *oneTimeTimer;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *backgroundedDate;

- (void).cxx_destruct;

@end

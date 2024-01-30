@class NSDate;
@protocol PXVideoScrubberControllerTarget;

@interface PXScrubberSeekRequest : NSObject

@property (copy, nonatomic) NSDate *dateCreated;
@property (nonatomic) double seekTime;
@property (weak, nonatomic) id<PXVideoScrubberControllerTarget> target;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 seekTime:(double)a1;

@end

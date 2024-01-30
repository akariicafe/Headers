@class CAMediaTimingFunction;

@interface WBSFluidProgressAnimation : NSObject

@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;
@property (nonatomic) double initialPosition;
@property (nonatomic) double destinationPosition;
@property (nonatomic) double animationDuration;

- (void).cxx_destruct;

@end

@class NAValueThrottler;

@interface HUControlInteractionState : NSObject

@property (retain, nonatomic) NAValueThrottler *writeThrottler;
@property (nonatomic) unsigned long long inFlightWriteCount;
@property (nonatomic, getter=isUserInteractionActive) BOOL userInteractionActive;
@property (nonatomic, getter=areWritesInProgressOrPossible) BOOL writesInProgressOrPossible;

- (void).cxx_destruct;

@end

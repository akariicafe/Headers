@class NSString;
@protocol PXStoryPacingTimeSourceDelegate;

@interface PXStoryPacingManualTimeSource : NSObject <PXStoryPacingTimeSource>

@property (weak, nonatomic) id<PXStoryPacingTimeSourceDelegate> delegate;
@property (nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) BOOL isRealTime;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } currentTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)incrementByTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end

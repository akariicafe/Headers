@class PXDisplayLink, NSString;
@protocol PXStoryPacingClock, PXStoryPacingTimeSourceDelegate;

@interface PXStoryPacingAutoIncrementingTimeSource : NSObject <PXStoryPacingTimeSource>

@property (retain, nonatomic) PXDisplayLink *playLink;
@property (weak, nonatomic) id<PXStoryPacingClock> pacingClock;
@property (weak, nonatomic) id<PXStoryPacingTimeSourceDelegate> delegate;
@property (nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) BOOL isRealTime;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } currentTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_handlePlayLink:(id)a0;

@end

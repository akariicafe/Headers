@class VEKResult, NSString, NSObject;
@protocol OS_dispatch_queue, PMScrubberProviderDelegate, PMScrubberProviderActionDelegate;

@interface PMScrubberProvider : NSObject <PMScrubberProviderDataSource>

@property (retain, nonatomic) VEKResult *currentResult;
@property (nonatomic) double currentDuration;
@property (nonatomic) BOOL isPlayingCurrent;
@property (nonatomic) BOOL isPlayingPrevious;
@property (nonatomic) double currentProgress;
@property (nonatomic) BOOL isScrubbing;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (weak, nonatomic) id<PMScrubberProviderDelegate> delegate;
@property (weak, nonatomic) id<PMScrubberProviderActionDelegate> actionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)updateWithResult:(id)a0;
- (void)playbackProgressDidChange:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)playbackStatusDidChange:(BOOL)a0;
- (void)willEnterEditMode;
- (long long)clipIndexWithTime:(double)a0;
- (void)imageForItem:(long long)a0 withThumbnailCount:(long long)a1 size:(struct CGSize { double x0; double x1; })a2 completionHandler:(id /* block */)a3;
- (void)scrubberTapped;
- (void)scrubberReleasedWithProgress:(double)a0;
- (void)scrubberToggled;
- (void)scrubberTouched;
- (void)scrubberScrolledWithProgress:(double)a0;

@end

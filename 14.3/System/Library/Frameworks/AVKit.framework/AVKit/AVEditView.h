@class UIMovieScrubber, NSString;
@protocol AVEditViewDelegate, AVEditViewDataSource;

@interface AVEditView : UIView <UIMovieScrubberDataSource, UIMovieScrubberDelegate>

@property (retain) UIMovieScrubber *movieScrubber;
@property (nonatomic, getter=isScrubbing) BOOL scrubbing;
@property (nonatomic, getter=isTrimming) BOOL trimming;
@property (weak, nonatomic) id<AVEditViewDataSource> dataSource;
@property (weak, nonatomic) id<AVEditViewDelegate> delegate;
@property (nonatomic) BOOL prefersThumbVisible;
@property (readonly, nonatomic) double trimStartTime;
@property (readonly, nonatomic) double trimEndTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadData;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (id)movieScrubber:(id)a0 evenlySpacedTimestamps:(int)a1 startingAt:(id)a2 endingAt:(id)a3;
- (void)setCurrentTime:(double)a0;
- (void)movieScrubber:(id)a0 valueDidChange:(double)a1;
- (double)movieScrubberDuration:(id)a0;
- (void)movieScrubber:(id)a0 editingStartValueDidChange:(double)a1;
- (void)movieScrubber:(id)a0 editingEndValueDidChange:(double)a1;
- (void)movieScrubberWillBeginRequestingThumbnails:(id)a0;
- (void)movieScrubberDidFinishRequestingThumbnails:(id)a0;
- (void)movieScrubberDidBeginScrubbing:(id)a0 withHandle:(int)a1;
- (void)movieScrubberDidEndScrubbing:(id)a0 withHandle:(int)a1;
- (void)layoutSubviews;
- (void)movieScrubber:(id)a0 requestThumbnailImageForTimestamp:(id)a1;
- (void)setThumbnailImage:(struct CGImage { } *)a0 forTimestamp:(id)a1;
- (double)movieScrubberThumbnailAspectRatio:(id)a0;
- (void)userObservationGestureRecognizerFired:(id)a0;

@end

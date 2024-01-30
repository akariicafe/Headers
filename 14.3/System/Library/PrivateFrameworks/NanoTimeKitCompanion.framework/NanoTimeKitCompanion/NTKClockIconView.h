@interface NTKClockIconView : UIView

@property (nonatomic) double fullDiameter;
@property (nonatomic) BOOL paused;

- (id)borrowCircleView;
- (id)borrowTimeView;
- (void)restoreBorrowedViews;

@end

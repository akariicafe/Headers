@class NSSet, UIImageView, FMFTintedActivityIndicatorView, FMFRefreshWrapperButton;

@interface FMFRefreshBarButtonItem : UIBarButtonItem

@property (retain, nonatomic) FMFRefreshWrapperButton *wrapperButton;
@property (retain, nonatomic) FMFTintedActivityIndicatorView *aiv;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) id locateNotification;
@property (retain, nonatomic) NSSet *locations;

- (void)addLocation:(id)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)stopAnimating;
- (BOOL)isAnimating;
- (void)updateLocations;
- (void)setImageInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (void)startAnimating;
- (void)locatingInProgressChanged:(id)a0;
- (void)dealloc;
- (id)accessibilityLabel;
- (void)removeLocationForHandle:(id)a0;
- (void)localTapped;
- (void)_updateLocateInProgress;
- (BOOL)anyLocationIsUpdating;

@end

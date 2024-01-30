@class NSString, DBSContinuousExposeLayoutAnimationView, DBSStageManagerOptionView, UISegmentedControl, NSUserDefaults;

@interface DBSContinuousExposeLayoutTableViewCell : UITableViewCell <DBSStageManagerOptionViewDelegate>

@property (retain, nonatomic) UISegmentedControl *displaySelectionControl;
@property (retain, nonatomic) DBSStageManagerOptionView *recentAppOptionView;
@property (retain, nonatomic) DBSStageManagerOptionView *dockOptionView;
@property (retain, nonatomic) DBSContinuousExposeLayoutAnimationView *animationView;
@property (nonatomic) long long currentDisplaySelection;
@property (retain, nonatomic) NSUserDefaults *_springBoardDefaults;
@property (retain, nonatomic) id embeddedShowDockObserver;
@property (retain, nonatomic) id externalShowDockObserver;
@property (retain, nonatomic) id embeddedShowRecentAppsObserver;
@property (retain, nonatomic) id externalShowRecentAppsObserver;
@property (nonatomic) BOOL isExternalDisplayConnected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)cellStyle;

- (double)scaleFactor;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (BOOL)isLandscape;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;
- (void)configureCell;
- (unsigned long long)animationViewState;
- (void)configureAnimationViews;
- (void)createDisplaySelectionControl;
- (BOOL)isOptionEnabled:(unsigned long long)a0;
- (void)layoutAnimationViews;
- (void)setOption:(unsigned long long)a0 enabled:(BOOL)a1;
- (BOOL)stageManagerOptionViewIsOptionEnabled:(id)a0;
- (void)updateDisplaySelectionControlForExternalDisplayConnectedState:(BOOL)a0;
- (void)updateOptionViewSelectionAnimated:(BOOL)a0;
- (void)userDidTapOnStateManagerOptionView:(id)a0;

@end

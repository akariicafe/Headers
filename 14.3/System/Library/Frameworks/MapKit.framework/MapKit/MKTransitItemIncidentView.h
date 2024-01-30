@class NSString, UIImageView, NSArray, NSLayoutConstraint, _MKUILabel, MKTransitIncidentItemCellBackgroundView;

@interface MKTransitItemIncidentView : UIView <MKTransitItemIncidentView> {
    UIImageView *_incidentIconImageView;
    BOOL _needsConstraintsRebuild;
    NSArray *_constraints;
    _MKUILabel *_titleLabel;
    _MKUILabel *_lastUpdatedLabel;
    MKTransitIncidentItemCellBackgroundView *_backgroundView;
    BOOL _incidentIsBlocking;
    BOOL _useCondensedWidthLayout;
    NSLayoutConstraint *_titleLabelToTopConstraint;
    NSLayoutConstraint *_bottomToLabelConstraint;
    NSLayoutConstraint *_titleToLastUpdatedLabelConstraint;
    NSLayoutConstraint *_bottomToBackgroundConstraint;
    double _bottomToBackgroundOffset;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (nonatomic) long long position;
@property (nonatomic) BOOL padBottom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_contentSizeCategoryDidChange;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateConstraints;
- (void)didMoveToWindow;
- (void)configureViews;
- (void)_configureWithMessage:(id)a0 referenceDate:(id)a1 lastUpdated:(id)a2 incidentIsBlocking:(BOOL)a3 shouldShowImage:(BOOL)a4 inSiri:(BOOL)a5;
- (void)configureWithIncident:(id)a0 referenceDate:(id)a1 shouldShowImage:(BOOL)a2 inSiri:(BOOL)a3;
- (id)_blockingImage;
- (id)_nonBlockingImage;
- (void)_updateBottomConstraintWithOffset:(double)a0;
- (void)rebuildConstraints;
- (void)configureWithIncidentMessage:(id)a0 referenceDate:(id)a1 shouldShowImage:(BOOL)a2 inSiri:(BOOL)a3;
- (void)configureWithMessage:(id)a0 incident:(id)a1 referenceDate:(id)a2 shouldShowImage:(BOOL)a3 inSiri:(BOOL)a4;
- (void)infoCardThemeChanged;
- (void)_updateConstraintValues;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

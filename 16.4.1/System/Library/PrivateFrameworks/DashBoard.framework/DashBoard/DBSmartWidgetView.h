@class UIImageView, DBSmartWidgetPrediction, UILabel, DBSmartWidgetEngine;

@interface DBSmartWidgetView : UIView <DBSmartWidgetPredictionObserver>

@property (retain, nonatomic) UIImageView *imageview;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *scoreDebugLabel;
@property (retain, nonatomic) UILabel *nextRefreshDebugLabel;
@property (retain, nonatomic) UILabel *validRangesDebugLabel;
@property (retain, nonatomic) DBSmartWidgetPrediction *prediction;
@property (weak, nonatomic) DBSmartWidgetEngine *engine;

- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_updateViews;
- (void)_updateImageBorder;
- (void)predictionDidUpdate:(id)a0;

@end

@class UIImageView, UILabel, UIButton;

@interface LUILogScreenshotCollectionViewCell : UICollectionViewCell

@property (readonly, nonatomic) UIImageView *screenshotImageView;
@property (readonly, nonatomic) UILabel *screenshotDateLabel;
@property (readonly, nonatomic) UIButton *clearButton;
@property (copy, nonatomic) id /* block */ clearButtonAction;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setup;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)_createClearButton;
- (id)_createScreenshotDateLabel;
- (id)_createScreenshotImageView;
- (void)clearButtonTapped:(id)a0;

@end

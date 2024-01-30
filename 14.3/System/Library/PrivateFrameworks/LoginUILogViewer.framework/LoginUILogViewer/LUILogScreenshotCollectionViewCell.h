@class UIImageView, UILabel, UIButton;

@interface LUILogScreenshotCollectionViewCell : UICollectionViewCell

@property (readonly, nonatomic) UIImageView *screenshotImageView;
@property (readonly, nonatomic) UILabel *screenshotDateLabel;
@property (readonly, nonatomic) UIButton *clearButton;
@property (copy, nonatomic) id /* block */ clearButtonAction;

- (void)_setup;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_createClearButton;
- (void)clearButtonTapped:(id)a0;
- (id)_createScreenshotImageView;
- (id)_createScreenshotDateLabel;

@end

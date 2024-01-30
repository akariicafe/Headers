@class NSString, UIImageView, UIImage, UILabel, NSLayoutConstraint, NSArray;

@interface HRImageLabel : UIView

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) NSLayoutConstraint *imageLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageTrailingConstraint;
@property (retain, nonatomic) NSArray *imageTextAlignmentConstraints;
@property (nonatomic) long long currentUserInterfaceStyle;
@property (copy, nonatomic) id /* block */ userInterfaceStyleChanged;
@property (nonatomic) long long imageAlignment;
@property (nonatomic) BOOL boldText;
@property (nonatomic) double imageLeadingSpacing;
@property (nonatomic) double imageTrailingSpacing;

- (id)viewForLastBaselineLayout;
- (void)layoutSubviews;
- (id)viewForFirstBaselineLayout;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_setUpConstraints;
- (id)_textLabelFont;
- (void)_setUpUI;
- (id)_textLabelBoldFont;
- (id)_textLabelFontStyle;
- (void)_updateCurrentUserInterfaceStyleIfNeeded;
- (void)_updateTextLabelFont;
- (BOOL)_isTextTallerThanImage;
- (void)_updateImageTextAlignmentConstraints;
- (id)initWIthImage:(id)a0 text:(id)a1;
- (id)initWithImage:(id)a0 size:(struct CGSize { double x0; double x1; })a1 text:(id)a2;
- (id)initWithImage:(id)a0 size:(struct CGSize { double x0; double x1; })a1 text:(id)a2 userInterfaceStyleChanged:(id /* block */)a3;

@end

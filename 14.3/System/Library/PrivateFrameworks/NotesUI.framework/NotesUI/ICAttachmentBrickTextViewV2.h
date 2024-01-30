@class ICAttachmentBrickLabelV2, UILayoutGuide, NSString, NSLayoutConstraint;

@interface ICAttachmentBrickTextViewV2 : UIView

@property (retain, nonatomic) ICAttachmentBrickLabelV2 *titleView;
@property (retain, nonatomic) ICAttachmentBrickLabelV2 *detail1View;
@property (retain, nonatomic) ICAttachmentBrickLabelV2 *detail2View;
@property (retain, nonatomic) UILayoutGuide *textBoxLayoutGuide;
@property (retain, nonatomic) NSLayoutConstraint *textBoxTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *textBoxLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *textBoxTrailingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *textBoxBottomConstraint;
@property (copy, nonatomic) NSString *titleString;
@property (copy, nonatomic) NSString *detail1String;
@property (copy, nonatomic) NSString *detail2String;
@property (nonatomic) BOOL titleLight;
@property (nonatomic) BOOL detail1Dark;
@property (nonatomic) BOOL vibrant;
@property (nonatomic) BOOL disableVibrancy;
@property (nonatomic) BOOL selected;

- (void)contentSizeCategoryDidChange;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateMargins;
- (BOOL)allowsVibrancy;
- (void)traitCollectionDidChange:(id)a0;
- (void)updateTextColors;
- (void)updateTextLayout;
- (void)updateTextFonts;

@end

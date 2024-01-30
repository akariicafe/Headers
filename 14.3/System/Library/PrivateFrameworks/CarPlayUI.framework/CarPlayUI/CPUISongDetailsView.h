@class CPUITitleView, UIStackView, CPUILabelButton, NSString, UILabel;

@interface CPUISongDetailsView : UIView

@property (retain, nonatomic) UIStackView *stackView;
@property (nonatomic) unsigned long long fontStyle;
@property (readonly, nonatomic) CPUITitleView *titleView;
@property (retain, nonatomic) UILabel *artistLabel;
@property (readonly, nonatomic) CPUILabelButton *albumArtistLabelButton;
@property (retain, nonatomic) NSString *trackTitle;
@property (retain, nonatomic) NSString *albumTitle;
@property (retain, nonatomic) NSString *artistName;
@property (nonatomic) struct CGSize { double width; double height; } maximumTitleViewSize;

+ (double)minimumHeightForTrackInfoFontStyle:(unsigned long long)a0;
+ (double)maximumHeightForTrackInfoFontStyle:(unsigned long long)a0;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateFont;
- (void)_updateNumberOfLines;

@end

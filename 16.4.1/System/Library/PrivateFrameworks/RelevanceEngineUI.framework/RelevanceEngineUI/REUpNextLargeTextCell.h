@class UIFont, UILayoutGuide, UIVisualEffectView, NSArray, REUpNextImageView, UILabel;

@interface REUpNextLargeTextCell : REUpNextBaseCell {
    BOOL _showingHeaderImage;
    BOOL _showingBodyImage;
    unsigned int _currentImageEdge;
    UIFont *_standardBodyFont;
    UIFont *_monospaceBodyFont;
    UILayoutGuide *_contentLayoutGuide;
    REUpNextImageView *_headerImage;
    REUpNextImageView *_bodyImage;
    UILabel *_headerLabel;
    UILabel *_bodyLabel;
    UIVisualEffectView *_headerVisualEffectView;
    UIVisualEffectView *_bodyVisualEffectView;
    UIVisualEffectView *_headerImageVisualEffectView;
    NSArray *_headerWithLeftImageConstraints;
    NSArray *_headerWithRightImageConstraints;
    NSArray *_headerWithNoImageConstraints;
    NSArray *_bodyWithLeftImageConstraints;
    NSArray *_bodyWithNoImageConstraints;
}

+ (void)initialize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)configureWithContent:(id)a0;
- (void)_updateHeaderColor;
- (void)defaultTextColorDidChange;
- (id)primaryEffectViews;
- (id)secondaryEffectViews;

@end

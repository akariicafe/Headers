@class UIView, NSAttributedString, AVButton, AVMobileChromelessControlsStyleSheet, AVMobileContentTag, CAGradientLayer, AVMobileContentTagView, NSMutableAttributedString, UILabel;
@protocol AVMobileTitlebarViewDelegate;

@interface AVMobileTitlebarView : AVView {
    UIView *_contentContainerView;
    CAGradientLayer *_contentContainerViewMask;
    AVMobileContentTagView *_contentTagView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    AVButton *_infoAffordance;
    NSMutableAttributedString *_titleLabelString;
    NSMutableAttributedString *_subtitleLabelString;
}

@property (retain, nonatomic) AVMobileChromelessControlsStyleSheet *styleSheet;
@property (retain, nonatomic) id<AVMobileTitlebarViewDelegate> delegate;
@property (retain, nonatomic) NSAttributedString *title;
@property (retain, nonatomic) NSAttributedString *subtitle;
@property (nonatomic) BOOL showsInfoAffordance;
@property (retain, nonatomic) AVMobileContentTag *contentTag;

- (void)avkit_intrinsicContentSizeOfSubviewWasInvalidated:(id)a0;
- (void)_infoAffordancePressed:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithStyleSheet:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didMoveToWindow;

@end

@class UIView, NSString, AVButton, AVMobileChromelessControlsStyleSheet, AVMobileContentTag, CAGradientLayer, AVMobileContentTagView, UILabel;
@protocol AVMobileTitlebarViewDelegate;

@interface AVMobileTitlebarView : AVView {
    UIView *_contentContainerView;
    CAGradientLayer *_contentContainerViewMask;
    AVMobileContentTagView *_contentTagView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    AVButton *_infoAffordance;
}

@property (retain, nonatomic) AVMobileChromelessControlsStyleSheet *styleSheet;
@property (retain, nonatomic) id<AVMobileTitlebarViewDelegate> delegate;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (nonatomic) BOOL showsInfoAffordance;
@property (retain, nonatomic) AVMobileContentTag *contentTag;

- (id)initWithStyleSheet:(id)a0;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)avkit_intrinsicContentSizeOfSubviewWasInvalidated:(id)a0;
- (void)layoutSubviews;
- (void)_infoAffordancePressed:(id)a0;
- (void).cxx_destruct;

@end

@class AVMobileChromelessControlsStyleSheet, UIView, UILabel, AVMobileContentTag;

@interface AVMobileContentTagView : UIView {
    UIView *_contentView;
    UILabel *_contentTagViewLabel;
}

@property (retain, nonatomic) AVMobileChromelessControlsStyleSheet *styleSheet;
@property (retain, nonatomic) AVMobileContentTag *contentTag;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithContentTag:(id)a0 withStyleSheet:(id)a1;

@end

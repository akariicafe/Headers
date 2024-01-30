@class UIImage, UILabel, UIView, NSData;

@interface CKBusinessMacToolbarView : UIView

@property (retain, nonatomic) UIView *leftItemView;
@property (retain, nonatomic) UIImage *bannerImage;
@property (retain, nonatomic) UILabel *fallbackTitleLabel;
@property (retain, nonatomic) NSData *bannerImageData;
@property (nonatomic) double preferredHeight;
@property (nonatomic) BOOL showingInStandAloneWindow;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } detailsPopoverFrame;

- (void).cxx_destruct;
- (void)setFallbackTitle:(id)a0;
- (void)setFallbackTitleColor:(id)a0;
- (void)layoutSubviews;

@end

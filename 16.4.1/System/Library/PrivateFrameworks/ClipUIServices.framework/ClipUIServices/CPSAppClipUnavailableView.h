@class NSString, CPSVibrantLabel, CPSButton;

@interface CPSAppClipUnavailableView : UIView {
    CPSVibrantLabel *_reasonLabel;
    CPSButton *_fallbackOpenButton;
    id /* block */ _fallbackURLAction;
}

@property (nonatomic) NSString *reasonString;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_setUpViews;
- (void)_openButtonTapped:(id)a0;
- (void)enableURLFallbackWithAction:(id /* block */)a0;

@end

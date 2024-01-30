@class NSString, CPSCardPlatterView, UIActivityIndicatorView, UILabel;

@interface CPSPausedCardView : UIView <CPSCardPlatterProviding>

@property (readonly, nonatomic) UILabel *title;
@property (readonly, nonatomic) UIActivityIndicatorView *spinner;
@property (retain, nonatomic) CPSCardPlatterView *cardPlatterView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (id)initWithReason:(unsigned long long)a0 title:(id)a1 backgroundColor:(id)a2;

@end

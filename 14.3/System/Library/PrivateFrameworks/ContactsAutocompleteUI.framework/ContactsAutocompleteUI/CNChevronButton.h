@class CNAtomView;
@protocol CNChevronButtonMenuDelegate;

@interface CNChevronButton : UIButton

@property (weak, nonatomic) CNAtomView<CNChevronButtonMenuDelegate> *delegateView;

- (void).cxx_destruct;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

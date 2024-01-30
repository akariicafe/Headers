@protocol CKMacToolbarViewDelegate;

@interface CKMacToolbarView : UIView

@property (weak, nonatomic) id<CKMacToolbarViewDelegate> delegate;

- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end

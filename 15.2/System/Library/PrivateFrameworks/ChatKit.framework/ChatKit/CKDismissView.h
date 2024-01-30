@class NSArray;
@protocol CKDismissViewDelegate;

@interface CKDismissView : UIView

@property (weak, nonatomic) id<CKDismissViewDelegate> delegate;
@property (copy, nonatomic) NSArray *passthroughViews;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end

@class ASCModalViewGestureRecognizer, NSMutableArray, UIView;

@interface ASCModalViewInteraction : NSObject

@property (retain, nonatomic) ASCModalViewGestureRecognizer *cancelGestureRecognizer;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (readonly, nonatomic) NSMutableArray *observers;
@property (readonly, weak, nonatomic) UIView *view;

- (id)initWithView:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (void)installWithCancelBlock:(id /* block */)a0;
- (void)cancelGestureDidChange:(id)a0;

@end

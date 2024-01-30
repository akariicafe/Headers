@class NSArray, CKActionMenuView;
@protocol CKActionMenuControllerDelegate;

@interface CKActionMenuController : NSObject

@property (retain, nonatomic) CKActionMenuView *actionMenuView;
@property (readonly, copy, nonatomic) NSArray *actionMenuItems;
@property (readonly, nonatomic) unsigned long long defaultActionIndex;
@property (weak, nonatomic) id<CKActionMenuControllerDelegate> delegate;
@property (copy, nonatomic) NSArray *passthroughViews;
@property (readonly, nonatomic, getter=isActionMenuVisible) BOOL actionMenuVisible;
@property (nonatomic) BOOL shouldDismissOnTap;

- (void)dismissActionMenuAnimated:(BOOL)a0;
- (void)setActionMenuItems:(id)a0 defaultActionIndex:(unsigned long long)a1 animated:(BOOL)a2;
- (id)initWithActionMenuItems:(id)a0 defaultActionIndex:(unsigned long long)a1 blurEffectStyle:(long long)a2;
- (void)presentActionMenuFromPoint:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1 animated:(BOOL)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertActionMenuFrameToView:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end

@class NSString;

@interface PXTipsHelper : NSObject

@property (class, readonly, nonatomic) NSString *curatedLibrarySwitchTipID;

+ (void)setup;
+ (void)invalidateClientContextForTip:(id)a0;
+ (BOOL)isTipPresentable:(id)a0;
+ (void)presentPopoverTip:(id)a0 with:(id)a1 sourceView:(id)a2 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 passthroughViews:(id)a4 permittedArrowDirections:(unsigned long long)a5 delegate:(id)a6;
+ (void)setTip:(id)a0 dismissCompletion:(id /* block */)a1;
+ (void)setTip:(id)a0 isPresentable:(BOOL)a1;
+ (void)setTipActionPerformed:(id)a0;
+ (void)updatePopoverTip:(id)a0 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end

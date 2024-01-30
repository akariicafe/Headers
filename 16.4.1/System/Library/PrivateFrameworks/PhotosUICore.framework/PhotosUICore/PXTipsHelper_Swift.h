@class NSString;

@interface PXTipsHelper_Swift : NSObject {
    void /* unknown type, empty encoding */ popovers;
}

@property (class, nonatomic, readonly) NSString *curatedLibrarySwitchTipID;
@property (class, nonatomic, readonly) PXTipsHelper_Swift *shared;
@property (class, nonatomic) BOOL hasInitializedTips;

- (void)invalidateClientContextForTip:(id)a0;
- (void)preparePopoverTip:(id)a0 delegate:(id)a1 presentingController:(id)a2 sourceView:(id)a3 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 passthroughViews:(id)a5 permittedArrowDirections:(unsigned long long)a6;
- (void)updatePopoverTip:(id)a0 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setup;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isTipPresentable:(id)a0;
- (void)setTip:(id)a0 dismissCompletion:(id /* block */)a1;
- (void)setTip:(id)a0 isPresentable:(BOOL)a1;
- (void)setTipActionPerformed:(id)a0;

@end

@class NSSet, NSHashTable;

@interface SBUIInteractionForwardingView : UIView {
    NSHashTable *_ignoreAlphaSubviewsTable;
}

@property (copy, nonatomic) NSSet *ignoreAlphaSubviews;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)addIgnoreAlphaSubview:(id)a0;
- (void)removeIgnoreAlphaSubview:(id)a0;

@end

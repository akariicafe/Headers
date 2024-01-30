@interface PXMessagesGadgetSpec : PXGadgetSpec {
    struct CGSize { double width; double height; } _layoutReferenceSize;
}

@property (class, readonly, nonatomic) double verticalSpacing;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsets;
- (double)columnWidthForColumnSpan:(long long)a0;
- (id)initWithTraitCollection:(id)a0 scrollAxis:(long long)a1;

@end

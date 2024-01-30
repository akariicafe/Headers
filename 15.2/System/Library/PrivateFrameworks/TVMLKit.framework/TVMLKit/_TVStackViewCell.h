@interface _TVStackViewCell : _TVStackCollectionViewCell {
    double _showcaseFactor;
    BOOL _isAdhocViewController;
}

- (void)layoutSubviews;
- (void)setViewController:(id)a0;
- (void)applyLayoutAttributes:(id)a0;

@end

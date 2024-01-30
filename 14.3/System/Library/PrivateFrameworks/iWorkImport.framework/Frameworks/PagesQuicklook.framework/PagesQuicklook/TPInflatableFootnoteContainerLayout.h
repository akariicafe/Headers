@interface TPInflatableFootnoteContainerLayout : TPFootnoteContainerLayout {
    BOOL _inflated;
}

- (void)validate;
- (id)computeLayoutGeometry;
- (void)setNeedsInflation;

@end

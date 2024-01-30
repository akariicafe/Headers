@interface CMDiagramChevronMapper : CMDiagramShapeMapper {
    BOOL mHChevron;
}

- (void)mapAt:(id)a0 withState:(id)a1;
- (void)setIsHChevron:(BOOL)a0;
- (void)mapChildrenAt:(id)a0 withState:(id)a1;
- (struct CGSize { double x0; double x1; })sizeForNode:(id)a0 atIndex:(unsigned long long)a1;
- (id)_suggestedBoundsForNodeAtIndex:(unsigned long long)a0;

@end

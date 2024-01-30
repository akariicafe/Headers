@interface CMDiagramPointArrowMapper : CMDiagramPointMapper {
    int mArrowType;
}

- (void)mapAt:(id)a0 withState:(id)a1;
- (id)initWithPoint:(id)a0 drawingContext:(id)a1 orientedBounds:(id)a2 parent:(id)a3;
- (id)transformPresentationName;
- (id)getTextBoundsForBounds:(id)a0;

@end

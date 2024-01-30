@interface CMDiagramPointArrowMapper : CMDiagramPointMapper {
    int mArrowType;
}

- (id)getTextBoundsForBounds:(id)a0;
- (id)initWithPoint:(id)a0 drawingContext:(id)a1 orientedBounds:(id)a2 parent:(id)a3;
- (void)mapAt:(id)a0 withState:(id)a1;
- (id)transformPresentationName;

@end

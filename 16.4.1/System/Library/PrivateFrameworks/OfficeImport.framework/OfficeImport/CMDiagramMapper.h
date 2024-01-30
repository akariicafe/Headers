@class ODDDiagram, CMDrawingContext;

@interface CMDiagramMapper : CMDrawableMapper {
    ODDDiagram *mDiagram;
    CMDrawingContext *mDrawingContext;
}

+ (int)diagramTypeFromString:(id)a0;

- (void).cxx_destruct;
- (id)diagram;
- (id)copyDiagramMapperForId:(id)a0;
- (id)identifierFromLayoutTypeId:(id)a0;
- (id)initWithOddDiagram:(id)a0 drawingContext:(id)a1 orientedBounds:(id)a2 parent:(id)a3;
- (void)mapAt:(id)a0 withState:(id)a1;
- (id)styleMatrix;

@end

@class ODDNodePoint, NSArray, ODDStyleDefinition, ODDColorTransform;

@interface ODDDiagram : OADDrawable {
    ODDNodePoint *mDocumentPoint;
    ODDColorTransform *mColorTransform;
    ODDStyleDefinition *mStyleDefinition;
}

@property (retain, nonatomic) NSArray *equivalentDrawables;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)colorTransform;
- (id)documentPoint;
- (id)styleDefinition;
- (void)setParentTextListStyle:(id)a0;
- (void)setDocumentPoint:(id)a0;

@end

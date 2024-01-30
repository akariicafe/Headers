@class ODDNodePoint, NSArray, ODDStyleDefinition, ODDColorTransform;

@interface ODDDiagram : OADDrawable {
    ODDNodePoint *mDocumentPoint;
    ODDColorTransform *mColorTransform;
    ODDStyleDefinition *mStyleDefinition;
}

@property (retain, nonatomic) NSArray *equivalentDrawables;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)colorTransform;
- (void)setParentTextListStyle:(id)a0;
- (void)setDocumentPoint:(id)a0;
- (id)styleDefinition;
- (id)documentPoint;

@end

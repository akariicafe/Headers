@class OADShapeGeometry, OADTextBody, OADOrientedBounds;

@interface OADShape : OADGraphic {
    OADShapeGeometry *mGeometry;
    OADTextBody *mTextBody;
}

@property (retain, nonatomic) OADOrientedBounds *textOrientedBounds;

- (id)shapeStyle;
- (id)geometry;
- (id)textBody;
- (id)description;
- (void)setTextBody:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (int)type;
- (void)setGeometry:(id)a0;
- (id)shapeProperties;
- (void)removeUnnecessaryOverrides;
- (void)setParentTextListStyle:(id)a0;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)a0;
- (void)flattenProperties;
- (BOOL)isTextBox;
- (void)createPresetGeometryWithShapeType:(int)a0;

@end

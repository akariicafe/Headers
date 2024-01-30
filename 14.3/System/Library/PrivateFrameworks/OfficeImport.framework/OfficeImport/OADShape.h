@class OADShapeGeometry, OADTextBody, OADOrientedBounds;

@interface OADShape : OADGraphic {
    OADShapeGeometry *mGeometry;
    OADTextBody *mTextBody;
}

@property (retain, nonatomic) OADOrientedBounds *textOrientedBounds;

- (id)geometry;
- (void)setGeometry:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)textBody;
- (id)shapeStyle;
- (id)description;
- (int)type;
- (void)setTextBody:(id)a0;
- (id)shapeProperties;
- (BOOL)isTextBox;
- (void)removeUnnecessaryOverrides;
- (void)setParentTextListStyle:(id)a0;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)a0;
- (void)flattenProperties;
- (void)createPresetGeometryWithShapeType:(int)a0;

@end

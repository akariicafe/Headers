@class OADShapeGeometry, OADTextBody, OADOrientedBounds;

@interface OADShape : OADGraphic {
    OADShapeGeometry *mGeometry;
    OADTextBody *mTextBody;
}

@property (retain, nonatomic) OADOrientedBounds *textOrientedBounds;

- (id)geometry;
- (id)shapeStyle;
- (int)type;
- (void)setGeometry:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)setTextBody:(id)a0;
- (id)textBody;
- (BOOL)isTextBox;
- (id)shapeProperties;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)a0;
- (void)createPresetGeometryWithShapeType:(int)a0;
- (void)flattenProperties;
- (void)removeUnnecessaryOverrides;
- (void)setParentTextListStyle:(id)a0;

@end

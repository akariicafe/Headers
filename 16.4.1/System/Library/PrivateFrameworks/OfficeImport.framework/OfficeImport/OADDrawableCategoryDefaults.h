@class OADTextBodyProperties, OADTextListStyle, OADShapeProperties;

@interface OADDrawableCategoryDefaults : NSObject {
    OADShapeProperties *mShapeProperties;
    OADTextBodyProperties *mTextBodyProperties;
    OADTextListStyle *mTextListStyle;
}

- (id)init;
- (id)description;
- (id)initWithDefaults;
- (void).cxx_destruct;
- (id)shapeProperties;
- (void)setShapeProperties:(id)a0;
- (void)setTextBodyProperties:(id)a0;
- (void)setTextListStyle:(id)a0;
- (id)textBodyProperties;
- (id)textListStyle;

@end

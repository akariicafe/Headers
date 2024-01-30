@class OADTextBodyProperties, OADTextListStyle, OADShapeProperties;

@interface OADDrawableCategoryDefaults : NSObject {
    OADShapeProperties *mShapeProperties;
    OADTextBodyProperties *mTextBodyProperties;
    OADTextListStyle *mTextListStyle;
}

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDefaults;
- (id)shapeProperties;
- (id)textBodyProperties;
- (id)textListStyle;
- (void)setShapeProperties:(id)a0;
- (void)setTextBodyProperties:(id)a0;
- (void)setTextListStyle:(id)a0;

@end

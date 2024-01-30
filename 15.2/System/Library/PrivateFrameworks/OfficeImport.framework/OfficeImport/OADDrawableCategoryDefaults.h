@class OADTextBodyProperties, OADTextListStyle, OADShapeProperties;

@interface OADDrawableCategoryDefaults : NSObject {
    OADShapeProperties *mShapeProperties;
    OADTextBodyProperties *mTextBodyProperties;
    OADTextListStyle *mTextListStyle;
}

- (id)initWithDefaults;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)shapeProperties;
- (id)textBodyProperties;
- (id)textListStyle;
- (void)setShapeProperties:(id)a0;
- (void)setTextBodyProperties:(id)a0;
- (void)setTextListStyle:(id)a0;

@end

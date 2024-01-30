@class OADShapeProperties, OADTextBody, ODDPointPropertySet;

@interface ODDPoint : NSObject {
    int mType;
    ODDPointPropertySet *mPropertySet;
    OADShapeProperties *mShapeProperties;
    OADTextBody *mText;
}

+ (void)addConnectionToPoint:(id)a0 order:(unsigned long long)a1 array:(id *)a2;

- (id)description;
- (void)setText:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)text;
- (int)type;
- (void)setType:(int)a0;
- (id)shapeProperties;
- (id)propertySet;

@end

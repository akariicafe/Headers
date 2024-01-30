@class OADShapeProperties, OADTextBody, ODDPointPropertySet;

@interface ODDPoint : NSObject {
    int mType;
    ODDPointPropertySet *mPropertySet;
    OADShapeProperties *mShapeProperties;
    OADTextBody *mText;
}

+ (void)addConnectionToPoint:(id)a0 order:(unsigned long long)a1 array:(id *)a2;

- (int)type;
- (void)setText:(id)a0;
- (id)text;
- (void)setType:(int)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)propertySet;
- (id)shapeProperties;

@end

@interface CMDrawingAction : NSObject {
    int _type;
    id _value;
    float _floatValue;
}

- (float)floatValue;
- (id)value;
- (id)description;
- (void).cxx_destruct;
- (int)type;
- (void)dealloc;
- (id)initWithType:(int)a0 andValue:(id)a1;
- (id)initWithType:(int)a0 andFloatValue:(float)a1;

@end

@interface CMDrawingAction : NSObject {
    int _type;
    id _value;
    float _floatValue;
}

- (float)floatValue;
- (int)type;
- (void)dealloc;
- (id)value;
- (id)description;
- (void).cxx_destruct;
- (id)initWithType:(int)a0 andFloatValue:(float)a1;
- (id)initWithType:(int)a0 andValue:(id)a1;

@end

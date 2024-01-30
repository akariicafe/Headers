@interface CMDrawingAction : NSObject {
    int _type;
    id _value;
    float _floatValue;
}

- (void).cxx_destruct;
- (float)floatValue;
- (void)dealloc;
- (id)value;
- (id)description;
- (int)type;
- (id)initWithType:(int)a0 andValue:(id)a1;
- (id)initWithType:(int)a0 andFloatValue:(float)a1;

@end

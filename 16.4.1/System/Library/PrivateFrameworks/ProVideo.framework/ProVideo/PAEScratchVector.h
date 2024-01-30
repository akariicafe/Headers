@interface PAEScratchVector : NSObject {
    float _x;
    float _y;
    float _endX;
    float _endY;
}

- (id)initWithStartLocationX:(float)a0 andY:(float)a1 andEndLocationX:(float)a2 andY:(float)a3;
- (void)startLocationX:(float *)a0 andY:(float *)a1 andEndLocationX:(float *)a2 andY:(float *)a3;

@end

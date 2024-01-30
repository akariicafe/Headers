@class NSDictionary, OADOrientedBounds;

@interface CMShapeBuilder : NSObject {
    int _type;
    OADOrientedBounds *_orientedBounds;
    unsigned long long _format;
    NSDictionary *_adjustValues;
}

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })canonicalBounds;

- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })affineTransform;
- (void)setFileFormat:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)setOrientedBounds:(id)a0;
- (void)setShapeType:(int)a0;
- (BOOL)isOffice12;
- (struct CGPath { } *)copyShapeWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)setAdjustValues:(id)a0;
- (float)maxAdjustedValue;

@end

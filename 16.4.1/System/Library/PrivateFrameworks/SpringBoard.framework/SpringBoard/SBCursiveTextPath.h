@class NSDictionary;

@interface SBCursiveTextPath : NSObject {
    double _initialWeight;
    double _finalWeight;
    double _rampTime;
    double _length;
    double _duration;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _boundingBoxOfPath;
    NSDictionary *_pathDefinition;
    long long _resolution;
}

- (id)initWithURL:(id)a0;
- (double)duration;
- (void).cxx_destruct;
- (void /* unknown type, empty encoding */)_float4FromArray:(id)a0;
- (id)initWithURL:(id)a0 resolution:(long long)a1;
- (struct CGPath { } *)pathForFraction:(double)a0 calculateLength:(BOOL)a1;
- (struct CGPath { } *)pathForTime:(double)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pointSize:(double)a1 flipped:(BOOL)a2;

@end

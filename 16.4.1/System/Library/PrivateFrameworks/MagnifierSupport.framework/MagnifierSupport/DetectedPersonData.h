@interface DetectedPersonData : NSObject

@property (class, readonly, nonatomic) DetectedPersonData *InvalidPersonData;

@property (readonly, nonatomic) void /* unknown type, empty encoding */ position;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ minPosition;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ maxPosition;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } screenRect;
@property (readonly, nonatomic) BOOL isValid;
@property (nonatomic) BOOL isEnabled;

- (id)initWithNormalizedMinX:(double)a0 maxX:(double)a1 minY:(double)a2 maxY:(double)a3 depth:(float)a4 camera:(id)a5 orientation:(long long)a6;
- (unsigned long long)computeArea;
- (id)initWithMinPosition:(id)a0 maxPosition:(SEL)a1 screenRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end

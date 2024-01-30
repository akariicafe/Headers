@class NSString;

@interface FaceCoreLandmark : NSObject

@property (readonly) NSString *type;
@property (readonly) unsigned long long pointCount;
@property (readonly) struct CGPoint { double x0; double x1; } *points;

+ (id)landmarkWithType:(id)a0 pointCount:(unsigned long long)a1 points:(struct CGPoint { double x0; double x1; } *)a2;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithType:(id)a0 pointCount:(unsigned long long)a1 points:(struct CGPoint { double x0; double x1; } *)a2;

@end

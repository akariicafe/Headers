@class NSArray, PKStroke;

@interface PKShape : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSArray *strokes;
@property (readonly, nonatomic) PKStroke *originalStroke;
@property (readonly, nonatomic) BOOL fillable;

+ (id)snapToShapeActionNameForNumShapes:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)initWithShapeType:(long long)a0 strokes:(id)a1 originalStroke:(id)a2;

@end

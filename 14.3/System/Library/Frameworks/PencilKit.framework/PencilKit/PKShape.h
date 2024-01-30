@class NSArray, PKStroke;

@interface PKShape : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSArray *strokes;
@property (readonly, nonatomic) PKStroke *originalStroke;
@property (readonly, nonatomic) BOOL fillable;

- (void).cxx_destruct;
- (id)initWithShapeType:(long long)a0 strokes:(id)a1 originalStroke:(id)a2;

@end

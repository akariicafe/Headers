@class NSArray;

@interface PHASEOccluder : PHASEObject

@property (nonatomic) float materialScaleFactor;
@property (nonatomic) BOOL isStatic;
@property (readonly, copy, nonatomic) NSArray *shapes;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithEngine:(id)a0 shapes:(id)a1;

@end

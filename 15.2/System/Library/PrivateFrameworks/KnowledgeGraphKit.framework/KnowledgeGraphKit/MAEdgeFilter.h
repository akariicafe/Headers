@class MARelation, KGEdgeFilter;

@interface MAEdgeFilter : MAElementFilter

@property (class, readonly, nonatomic) MAEdgeFilter *any;

@property (readonly, nonatomic) KGEdgeFilter *kgEdgeFilter;
@property (readonly, nonatomic) MARelation *outRelation;
@property (readonly, nonatomic) MARelation *inRelation;
@property (readonly, nonatomic) MARelation *anyDirectionRelation;

+ (BOOL)scanInstance:(out id *)a0 withScanner:(id)a1;
+ (id)edgeFilterWithVisualString:(id)a0;

- (id)relationWithType:(unsigned long long)a0;
- (void)appendVisualStringToString:(id)a0;
- (BOOL)matchesEdge:(id)a0;

@end

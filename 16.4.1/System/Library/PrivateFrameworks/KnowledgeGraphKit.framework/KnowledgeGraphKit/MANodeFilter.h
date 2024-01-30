@class KGNodeFilter, MARelation;

@interface MANodeFilter : MAElementFilter

@property (class, readonly, nonatomic) MANodeFilter *any;

@property (readonly, nonatomic) KGNodeFilter *kgNodeFilter;
@property (readonly, nonatomic) MARelation *relation;

+ (id)nodeFilterWithVisualString:(id)a0;
+ (BOOL)scanInstance:(out id *)a0 withScanner:(id)a1;

- (void)appendVisualStringToString:(id)a0;
- (BOOL)matchesNode:(id)a0;

@end

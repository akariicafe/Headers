@class SXLayoutBlueprint;

@interface SXContainerComponentBlueprint : SXComponentBlueprint

@property (retain, nonatomic) SXLayoutBlueprint *layoutBlueprint;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)setParentLayoutBlueprint:(id)a0;

@end

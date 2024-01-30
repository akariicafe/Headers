@interface TSCH3DSeriesLabelKind : TSCH3DAxisLabelKind

+ (id)kind;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_singletonAlloc;

- (unsigned long long)count:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)unitSpaceValueForAxis:(id)a0 index:(unsigned long long)a1;
- (id)labelForAxis:(id)a0 index:(unsigned long long)a1;

@end

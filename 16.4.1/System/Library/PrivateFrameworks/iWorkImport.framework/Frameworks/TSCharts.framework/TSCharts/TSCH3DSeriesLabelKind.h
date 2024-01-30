@interface TSCH3DSeriesLabelKind : TSCH3DAxisLabelKind

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)kind;
+ (id)_singletonAlloc;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count:(id)a0;
- (id)labelForAxis:(id)a0 index:(unsigned long long)a1;
- (double)unitSpaceValueForAxis:(id)a0 index:(unsigned long long)a1;

@end

@interface TSCH3DValueAxisLabelKind : TSCH3DAxisLabelKind

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)kind;
+ (id)_singletonAlloc;

- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (unsigned long long)retainCount;
- (unsigned long long)count:(id)a0;
- (id)retain;
- (double)unitSpaceValueForAxis:(id)a0 index:(unsigned long long)a1;
- (id)labelForAxis:(id)a0 index:(unsigned long long)a1;

@end

@interface TSCHChartAxisID : NSObject <NSCopying>

@property (readonly) int type;
@property (readonly) unsigned long long ordinal;

+ (id)axisIDWithType:(int)a0 ordinal:(unsigned long long)a1;

- (long long)compare:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithArchive:(const void *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)saveToArchive:(void *)a0;
- (BOOL)intersectsAxisID:(id)a0;
- (id)debuggingName;
- (id)initWithType:(int)a0 ordinal:(unsigned long long)a1;
- (id)displayNameWithOrdinal:(BOOL)a0;

@end

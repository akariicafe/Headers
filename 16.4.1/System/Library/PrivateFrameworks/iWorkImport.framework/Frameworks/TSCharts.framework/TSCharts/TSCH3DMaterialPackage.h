@interface TSCH3DMaterialPackage : NSObject <NSCopying>

+ (id)package;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)hasCompleteData;
- (void)didInitFromSOS;

@end

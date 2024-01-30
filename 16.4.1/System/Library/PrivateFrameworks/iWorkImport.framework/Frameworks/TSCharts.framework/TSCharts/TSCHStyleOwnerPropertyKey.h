@class TSCHStyleOwnerPath;

@interface TSCHStyleOwnerPropertyKey : NSObject <NSCopying>

@property (readonly, nonatomic) TSCHStyleOwnerPath *styleOwnerPath;
@property (readonly, nonatomic) int property;

+ (id)propertyKeyWithStyleOwnerPath:(id)a0 property:(int)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithStyleOwnerPath:(id)a0 property:(int)a1;

@end

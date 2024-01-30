@class TSCHStyleOwnerPath;

@interface TSCHStyleOwnerPropertyKey : NSObject <NSCopying>

@property (readonly, nonatomic) TSCHStyleOwnerPath *styleOwnerPath;
@property (readonly, nonatomic) int property;

+ (id)propertyKeyWithStyleOwnerPath:(id)a0 property:(int)a1;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithStyleOwnerPath:(id)a0 property:(int)a1;

@end

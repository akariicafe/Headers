@interface AXPiOSElementData : NSObject <NSCopying>

@property (nonatomic) struct { unsigned long long elementOrHash; unsigned long long elementID; } uid;
@property (nonatomic) int pid;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end

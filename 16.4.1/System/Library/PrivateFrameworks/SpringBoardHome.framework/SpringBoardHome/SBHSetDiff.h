@class NSSet;

@interface SBHSetDiff : NSObject <NSCopying>

@property (readonly, nonatomic) NSSet *additions;
@property (readonly, nonatomic) NSSet *deletions;
@property (readonly, nonatomic) NSSet *updates;
@property (readonly, nonatomic) NSSet *fromSet;
@property (readonly, nonatomic) NSSet *toSet;

+ (id)diffFromSet:(id)a0 toSet:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)_initWithFromSet:(id)a0 toSet:(id)a1 additions:(id)a2 deletions:(id)a3 updates:(id)a4;

@end

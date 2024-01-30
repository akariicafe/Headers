@class NSSet, NSMutableSet;

@interface HFSetDiff : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) NSMutableSet *additions;
@property (readonly, nonatomic) NSMutableSet *deletions;
@property (readonly, nonatomic) NSMutableSet *updates;
@property (readonly, nonatomic) NSSet *fromSet;
@property (readonly, nonatomic) NSMutableSet *toSet;

+ (id)diffFromSet:(id)a0 toSet:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)_initWithFromSet:(id)a0 toSet:(id)a1 additions:(id)a2 deletions:(id)a3 updates:(id)a4;

@end

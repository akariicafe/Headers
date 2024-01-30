@class NSSet, NSMutableSet;

@interface HFSetDiff : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) NSMutableSet *additions;
@property (readonly, nonatomic) NSMutableSet *deletions;
@property (readonly, nonatomic) NSMutableSet *updates;
@property (readonly, nonatomic) NSSet *fromSet;
@property (readonly, nonatomic) NSMutableSet *toSet;

+ (id)diffFromSet:(id)a0 toSet:(id)a1;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)_initWithFromSet:(id)a0 toSet:(id)a1 additions:(id)a2 deletions:(id)a3 updates:(id)a4;
- (id)diffByMergingDiff:(id)a0 keyGenerator:(id /* block */)a1;

@end

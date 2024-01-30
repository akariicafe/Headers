@class NSMutableSet;

@interface RBSystemState : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) BOOL preventIdleSleep;
@property (readonly, nonatomic) BOOL preventLaunch;
@property (readonly, nonatomic) NSMutableSet *preventIdleSleepIdentifiers;
@property (readonly, copy, nonatomic) NSMutableSet *tags;
@property (readonly, copy, nonatomic) NSMutableSet *preventLaunchPredicates;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)_init;
- (BOOL)isEqual:(id)a0;

@end

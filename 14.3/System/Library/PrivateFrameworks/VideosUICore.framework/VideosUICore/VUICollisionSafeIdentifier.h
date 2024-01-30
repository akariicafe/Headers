@class NSObject;
@protocol NSCopying;

@interface VUICollisionSafeIdentifier : NSObject <NSCopying>

@property (copy, nonatomic) NSObject<NSCopying> *rootIdentifier;
@property (nonatomic) unsigned long long collisionCount;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithRootIdentifier:(id)a0 collisionCount:(unsigned long long)a1;

@end

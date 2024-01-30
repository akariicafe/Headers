@class NSObject;
@protocol NSCopying;

@interface VUICollisionSafeIdentifier : NSObject <NSCopying>

@property (copy, nonatomic) NSObject<NSCopying> *rootIdentifier;
@property (nonatomic) unsigned long long collisionCount;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithRootIdentifier:(id)a0 collisionCount:(unsigned long long)a1;

@end

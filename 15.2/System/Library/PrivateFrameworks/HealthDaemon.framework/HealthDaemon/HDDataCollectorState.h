@interface HDDataCollectorState : NSObject <NSCopying>

@property (nonatomic) unsigned long long collectionType;
@property (nonatomic) unsigned long long sourceType;
@property (nonatomic) long long priority;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

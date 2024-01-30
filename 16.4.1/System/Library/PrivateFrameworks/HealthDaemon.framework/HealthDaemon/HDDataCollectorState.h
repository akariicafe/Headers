@interface HDDataCollectorState : NSObject <NSCopying>

@property (nonatomic) unsigned long long collectionType;
@property (nonatomic) unsigned long long sourceType;
@property (nonatomic) long long priority;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)description;

@end

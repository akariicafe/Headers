@class NSString;

@interface BCSShardIdentifier : NSObject <BCSShardItemIdentifying, NSCopying>

@property (nonatomic) long long type;
@property (nonatomic) long long startIndex;
@property (nonatomic) long long shardCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifierWithType:(long long)a0 startIndex:(long long)a1 shardCount:(long long)a2;
+ (id)identifierFromShardIdentifying:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)_initWithType:(long long)a0 startIndex:(long long)a1 shardCount:(long long)a2;

@end

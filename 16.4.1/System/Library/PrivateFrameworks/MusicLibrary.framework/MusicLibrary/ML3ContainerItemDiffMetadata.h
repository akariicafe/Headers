@interface ML3ContainerItemDiffMetadata : NSObject

@property (nonatomic) long long persistentID;
@property (nonatomic) long long containerPersistentID;
@property (nonatomic) long long itemPersistentID;
@property (nonatomic) long long newPosition;
@property (nonatomic) long long previousPosition;

+ (id)diffMetadataWithPersistentID:(long long)a0;
+ (id)diffMetadataWithPersistentID:(long long)a0 containerPersistentID:(long long)a1 itemPersistentID:(long long)a2 newPosition:(long long)a3 previousPosition:(long long)a4;

@end

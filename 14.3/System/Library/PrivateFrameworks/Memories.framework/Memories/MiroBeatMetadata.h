@class FMTimedMetadataItem;

@interface MiroBeatMetadata : NSObject

@property (retain, nonatomic) FMTimedMetadataItem *metadataItem;
@property (nonatomic) long long priority;

+ (id)beatWithMetadataItem:(id)a0 andPriority:(long long)a1;

- (void).cxx_destruct;
- (id)description;
- (id)initWithMetadataItem:(id)a0 andPriority:(long long)a1;

@end

@interface NUStoragePoolStats : NSObject <NSCopying>

@property (readonly, nonatomic) long long totalCount;
@property (readonly, nonatomic) long long totalBytes;
@property (readonly, nonatomic) long long peakTotalBytes;
@property (nonatomic) long long usedCount;
@property (nonatomic) long long usedBytes;
@property (readonly, nonatomic) long long peakUsedBytes;
@property (nonatomic) long long nonPurgeableCount;
@property (nonatomic) long long nonPurgeableBytes;
@property (readonly, nonatomic) long long peakNonPurgeableBytes;
@property (nonatomic) long long volatileCount;
@property (nonatomic) long long volatileBytes;
@property (readonly, nonatomic) long long peakVolatileBytes;
@property (nonatomic) long long discardedCount;
@property (nonatomic) long long migrationCount;
@property (nonatomic) long long migrationBytes;
@property (nonatomic) long long purgedCount;
@property (nonatomic) long long purgedBytes;
@property (nonatomic) long long requestCount;
@property (nonatomic) long long reusedNonPurgeableCount;
@property (nonatomic) long long reusedVolatileCount;
@property (readonly, nonatomic) long long reusedCount;
@property (readonly, nonatomic) float reusedRate;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

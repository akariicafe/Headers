@interface CIContextCache : NSObject

@property (class, readonly) long long peakNonVolatileSize;
@property (class, readonly) long long currentNonVolatileSize;
@property (class, readonly) long long countAllocated;

+ (void)resetStatistics;

@end

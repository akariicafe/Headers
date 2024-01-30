@interface ATXFileUtil : NSObject

+ (double)cacheAgeForConsumerType:(unsigned char)a0 basePath:(id)a1;
+ (BOOL)shouldUpdateCache:(id)a0 withRefreshRate:(double)a1;
+ (BOOL)_shouldUpdateCache:(id)a0 withRefreshRate:(double)a1 currentTime:(double)a2;
+ (double)cacheAgeForCache:(id)a0 withCurrentTime:(double)a1;
+ (BOOL)cachesAreValidForBasePath:(id)a0 consumerSubTypes:(id)a1;
+ (BOOL)cachesAreValidForConsumerSubTypes:(id)a0;
+ (double)cacheAgeForConsumerType:(unsigned char)a0;

@end

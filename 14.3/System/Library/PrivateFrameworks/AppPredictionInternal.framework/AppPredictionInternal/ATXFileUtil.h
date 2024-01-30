@interface ATXFileUtil : NSObject

+ (BOOL)cachesAreValidForBasePath:(id)a0 consumerSubTypes:(id)a1;
+ (double)cacheAgeForCache:(id)a0 withCurrentTime:(double)a1;
+ (double)cacheAgeForConsumerType:(unsigned char)a0 basePath:(id)a1;
+ (double)cacheAgeForConsumerType:(unsigned char)a0;
+ (BOOL)_shouldUpdateCache:(id)a0 withRefreshRate:(double)a1 currentTime:(double)a2;
+ (BOOL)cachesAreValidForConsumerSubTypes:(id)a0;
+ (BOOL)shouldUpdateCache:(id)a0 withRefreshRate:(double)a1;

@end

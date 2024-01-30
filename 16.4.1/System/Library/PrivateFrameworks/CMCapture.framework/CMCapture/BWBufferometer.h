@interface BWBufferometer : NSObject

@property (class, readonly) long long totalTrackedSizeInFlight;
@property (class, readonly) long long totalTrackedBuffersInFlight;

+ (void)initialize;
+ (void)trackBuffer:(void *)a0 trackedSize:(long long)a1;
+ (void)trackBuffer:(void *)a0 trackedSize:(long long)a1 tag:(id)a2 bufferType:(id)a3;

@end

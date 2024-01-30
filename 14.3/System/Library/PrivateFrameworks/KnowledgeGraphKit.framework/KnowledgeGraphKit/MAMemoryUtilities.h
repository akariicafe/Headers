@interface MAMemoryUtilities : NSObject

+ (id)humanReadableMemoryFootprint;
+ (id)humanReadableResidentMemory;
+ (unsigned long long)footprintBytes;
+ (unsigned long long)residentBytes;

@end

@interface MAMemoryUtilities : NSObject

+ (id)humanReadableMemorySizeWithSize:(unsigned long long)a0;
+ (id)humanReadableMemoryFootprint;
+ (id)humanReadableResidentMemory;
+ (id)humanReadablePeakMemoryFootprint;
+ (unsigned long long)footprintBytes;
+ (unsigned long long)peakFootprintBytes;
+ (unsigned long long)residentBytes;

@end

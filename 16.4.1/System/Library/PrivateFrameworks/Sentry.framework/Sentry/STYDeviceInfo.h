@class NSString;

@interface STYDeviceInfo : NSObject

@property (class, readonly) unsigned long long bootVolumeType;
@property (class, readonly) NSString *hardwareModel;
@property (class, readonly) NSString *osBuild;
@property (class, readonly) BOOL isAppleInternal;
@property (class, readonly) BOOL isMemoryConstrained;

+ (id)_determineHardwareModel;
+ (unsigned long long)_determineBootVolumeType;

@end

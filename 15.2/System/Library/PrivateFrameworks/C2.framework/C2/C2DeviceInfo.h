@interface C2DeviceInfo : NSObject

+ (BOOL)isAppleInternal;
+ (id)testName;
+ (id)productName;
+ (id)productType;
+ (id)productVersion;
+ (id)buildVersion;
+ (id)processName;
+ (id)processUUID;
+ (id)processVersion;

@end

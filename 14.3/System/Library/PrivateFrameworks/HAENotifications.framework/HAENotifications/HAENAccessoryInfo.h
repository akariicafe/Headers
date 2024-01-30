@class NSString, NSNumber;

@interface HAENAccessoryInfo : NSObject

@property (readonly) NSString *manufacturer;
@property (readonly) NSString *serialNumber;
@property (readonly) NSString *name;
@property (readonly) NSString *modelNumber;
@property (readonly) NSNumber *interfaceDeviceSerialNumber;
@property (readonly) NSString *interfaceModuleSerialNumber;

+ (id)getAccessoryInfo:(id *)a0;
+ (id)getAccessoryInfoFromIOAccesoryManager:(id *)a0;
+ (id)getAccessoryInfoFromIOKitDirectly:(id *)a0;

- (void).cxx_destruct;
- (id)description;

@end

@interface SASSystemInformation : NSObject

+ (id)storageCapacity;
+ (id)storageAvailable;
+ (id)productType;
+ (id)deviceClass;
+ (long long)compareProductVersion:(id)a0 toProductVersion:(id)a1;
+ (id)productVersion;

@end

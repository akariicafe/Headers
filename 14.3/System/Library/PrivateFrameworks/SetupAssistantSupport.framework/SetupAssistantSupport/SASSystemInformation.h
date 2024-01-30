@interface SASSystemInformation : NSObject

+ (id)productVersion;
+ (id)storageCapacity;
+ (id)storageAvailable;
+ (long long)compareProductVersion:(id)a0 toProductVersion:(id)a1;

@end

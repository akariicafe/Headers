@interface IMDeviceUtilities : NSObject

+ (BOOL)IMDeviceRegionIsEligibleToBeForcedIntoFilteringUnknownSender;
+ (BOOL)IMSupportsASTC;
+ (BOOL)IMDeviceIsGreenTea;
+ (BOOL)IMDeviceIsChinaRegion;
+ (BOOL)IMDeviceIsIndiaRegion;

@end

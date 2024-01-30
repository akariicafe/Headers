@interface IMDeviceUtilities : NSObject

+ (BOOL)IMDeviceIsGreenTea;
+ (BOOL)IMDeviceIsChinaRegion;
+ (BOOL)IMSupportsASTC;
+ (BOOL)IMDeviceIsIndiaRegion;
+ (BOOL)IMDeviceRegionIsEligibleToBeForcedIntoFilteringUnknownSender;

@end

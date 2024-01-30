@interface NPHSharedUtilities : NSObject

@property (class, readonly, nonatomic) BOOL isActiveDeviceTinker;

+ (BOOL)isActiveWatchChinaRegionCellular;
+ (BOOL)pairedDeviceHasHomeButton;

@end

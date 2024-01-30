@interface NPHSharedUtilities : NSObject

@property (class, readonly, nonatomic) BOOL isActiveDeviceTinker;

+ (BOOL)pairedDeviceHasHomeButton;
+ (BOOL)isActiveWatchChinaRegionCellular;

@end

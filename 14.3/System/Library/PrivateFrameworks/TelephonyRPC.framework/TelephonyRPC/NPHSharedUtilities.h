@interface NPHSharedUtilities : NSObject

@property (class, readonly, nonatomic) BOOL isActiveDeviceTinker;
@property (class, readonly, nonatomic) BOOL isActiveDeviceSpecial;

+ (BOOL)pairedDeviceHasHomeButton;
+ (BOOL)isEitherDeviceChinaRegionCellular;

@end

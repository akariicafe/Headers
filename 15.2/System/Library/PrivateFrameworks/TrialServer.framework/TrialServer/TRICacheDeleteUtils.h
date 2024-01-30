@interface TRICacheDeleteUtils : NSObject

+ (id)getFreeDiskSpace;
+ (id)getPurgeableDiskSpace;
+ (BOOL)hasSufficientDiskSpaceForDownload:(unsigned long long)a0;

@end

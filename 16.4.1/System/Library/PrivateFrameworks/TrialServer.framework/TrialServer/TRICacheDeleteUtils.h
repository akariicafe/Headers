@interface TRICacheDeleteUtils : NSObject

+ (id)getPurgeableDiskSpace;
+ (id)getFreeDiskSpace;
+ (BOOL)hasSufficientDiskSpaceForDownload:(unsigned long long)a0;

@end

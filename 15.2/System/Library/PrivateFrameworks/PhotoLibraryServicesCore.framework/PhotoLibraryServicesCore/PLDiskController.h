@interface PLDiskController : NSObject {
    double _lastFSCheck;
    long long _bytesRequiredForPhoto;
    struct { unsigned char needToCheckDiskSpace : 1; unsigned char probablyLowOnDiskSpace : 1; unsigned char isAssetsd : 1; unsigned int extra : 28; } _flags;
}

+ (id)sharedInstance;
+ (id)mountPointForPath:(id)a0;
+ (long long)fileSystemSizeForPath:(id)a0;
+ (long long)diskSpaceAvailableForPath:(id)a0;
+ (long long)freeDiskSpaceThreshold;
+ (BOOL)freeSpaceBelowDesiredSpaceThresholdForPath:(id)a0;
+ (long long)diskSpaceAvailableForUse;

- (void)updateAvailableDiskSpace;
- (void)_actuallyUpdateCookie;
- (id)init;
- (void)_updateCookie;
- (void)dealloc;
- (long long)bytesToAutomaticallyClear;
- (void)_diskSpaceDidBecomeLow;
- (BOOL)hasEnoughDiskToTakePicture;

@end

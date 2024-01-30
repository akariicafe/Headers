@interface PLDiskController : NSObject {
    double _lastFSCheck;
    long long _bytesRequiredForPhoto;
    struct { unsigned char needToCheckDiskSpace : 1; unsigned char probablyLowOnDiskSpace : 1; unsigned char isAssetsd : 1; unsigned int extra : 28; } _flags;
}

+ (id)sharedInstance;
+ (long long)diskSpaceAvailableForUse;
+ (long long)fileSystemSizeForPath:(id)a0;
+ (id)mountPointForPath:(id)a0;
+ (BOOL)freeSpaceBelowDesiredSpaceThresholdForPath:(id)a0;
+ (long long)freeDiskSpaceThreshold;
+ (long long)diskSpaceAvailableForPath:(id)a0;

- (void)_actuallyUpdateCookie;
- (void)updateAvailableDiskSpace;
- (void)dealloc;
- (BOOL)hasEnoughDiskToTakePicture;
- (id)init;
- (long long)bytesToAutomaticallyClear;
- (void)_diskSpaceDidBecomeLow;
- (void)_updateCookie;

@end

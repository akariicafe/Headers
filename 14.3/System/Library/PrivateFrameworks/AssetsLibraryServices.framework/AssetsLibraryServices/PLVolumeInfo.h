@class NSString;

@interface PLVolumeInfo : NSObject {
    NSString *_mountPoint;
    unsigned long long _blockSize;
    unsigned long long _desiredDiskThreshold;
    unsigned long long _nearLowDiskThreshold;
    unsigned long long _lowDiskThreshold;
    unsigned long long _veryLowDiskThreshold;
}

@property (readonly, nonatomic) unsigned long long volumeSize;
@property (readonly, nonatomic) long long availableSpace;
@property (readonly, nonatomic) unsigned long long desiredDiskThreshold;
@property (readonly, nonatomic) unsigned long long nearLowDiskThreshold;
@property (readonly, nonatomic) unsigned long long lowDiskThreshold;
@property (readonly, nonatomic) unsigned long long veryLowDiskThreshold;

- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (id)initWithMountPoint:(id)a0;

@end

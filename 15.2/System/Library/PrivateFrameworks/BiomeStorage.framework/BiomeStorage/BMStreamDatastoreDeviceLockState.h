@class NSMutableDictionary, NSMutableOrderedSet;

@interface BMStreamDatastoreDeviceLockState : NSObject

@property (nonatomic) BOOL canReadOrPruneData;
@property (retain, nonatomic) NSMutableOrderedSet *segmentNames;
@property (retain, nonatomic) NSMutableDictionary *segmentFileHandles;

- (id)initWithDeviceStateIsUnlocked:(BOOL)a0;
- (void).cxx_destruct;

@end

@class NSMutableDictionary, NSMutableOrderedSet;

@interface BMSegmentManagerProtectedState : NSObject {
    BOOL _canReadOrPruneData;
    NSMutableOrderedSet *_segmentNames;
    NSMutableDictionary *_segmentFileHandles;
}

- (id)initWithDeviceStateIsUnlocked:(BOOL)a0;
- (void).cxx_destruct;

@end

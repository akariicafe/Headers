@class NSArray;

@interface BWMultiCamConfiguration : NSObject {
    NSArray *_portTypesPrioritizedForCameraControls;
    NSArray *_unsynchronizedActiveStreamsPortTypes;
    NSArray *_synchronizedActiveStreamsGroupsPortTypes;
}

+ (void)initialize;
+ (id)configurationWithUnsynchronizedActiveStreamsPortTypes:(id)a0 synchronizedActiveStreamsGroupsPortTypes:(id)a1;
+ (id)configurationWithCurrentStateFromCaptureDevice:(id)a0;

- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (id)_initWithUnsynchronizedActiveStreamsPortTypes:(id)a0 synchronizedActiveStreamsGroupsPortTypes:(id)a1 withCaptureDevice:(id)a2 readCurrentStateFromCaptureDevice:(BOOL)a3;
- (id)multiCamConfigurationForDevice:(id)a0 errorOut:(int *)a1;
- (id)copyActiveSynchronizedStreamsGroupsForDevice:(id)a0 errorOut:(int *)a1;

@end

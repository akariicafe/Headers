@class BWFigVideoCaptureStream, NSArray, NSObject;
@protocol OS_dispatch_group;

@interface BWStreamStartStopState : NSObject {
    BWFigVideoCaptureStream *_stream;
    NSObject<OS_dispatch_group> *_hasStartedGroup;
    BOOL _hasEnteredStartedGroup;
    NSObject<OS_dispatch_group> *_dependentsHaveStoppedGroup;
    BWStreamStartStopState *_blockingMasterState;
    NSArray *_blockingSlaveStates;
    float _timeoutInSeconds;
    BOOL _waitForMasterAEToSettle;
}

- (id)description;
- (void)dealloc;

@end

@class BWFigVideoCaptureStream, NSArray, NSObject;
@protocol OS_dispatch_group;

@interface BWStreamStartStopState : NSObject {
    NSObject<OS_dispatch_group> *_hasStartedGroup;
    BOOL _hasEnteredStartedGroup;
    NSObject<OS_dispatch_group> *_dependentsHaveStoppedGroup;
    BWStreamStartStopState *_blockingMasterState;
    float _timeoutInSeconds;
}

@property (readonly, nonatomic) BWFigVideoCaptureStream *stream;
@property (retain, nonatomic) NSArray *blockingSlaveStates;
@property (nonatomic) BOOL waitForMasterAEToSettle;

- (void)dealloc;
- (BOOL)dependentWillStart;
- (void)dependentDidStop;
- (id)initWithStream:(id)a0 masterState:(id)a1 timeoutInSeconds:(float)a2;
- (BOOL)streamWillStart;
- (void)streamDidStart;
- (BOOL)streamWillStop;
- (void)streamDidStop;
- (id)description;

@end

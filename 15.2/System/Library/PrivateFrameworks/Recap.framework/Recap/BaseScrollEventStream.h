@class RCPEventSenderProperties, NSString, RCPEventEnvironment, NSMutableArray;

@interface BaseScrollEventStream : NSObject <RCPChildEventStream> {
    NSMutableArray *_processingEventBuffer;
    BOOL _hasCreatedBeginEvent;
}

@property (nonatomic) double frequency;
@property (retain, nonatomic) RCPEventEnvironment *environment;
@property (nonatomic) double currentTimeOffset;
@property (retain, nonatomic) RCPEventSenderProperties *senderProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)_currentMachTime;
- (void)advanceTime:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (id)finalizeEventStream;
- (void)didAppendFinalEvent:(struct __IOHIDEvent { } *)a0;
- (void)updateAmplitudeBy:(struct CGVector { double x0; double x1; })a0;
- (struct __IOHIDEvent { } *)eventToScrollBy:(struct CGVector { double x0; double x1; })a0;
- (void)willAppendInitialEvent:(struct __IOHIDEvent { } *)a0;
- (void)addToBuffer:(struct __IOHIDEvent { } *)a0;
- (void)advanceByDelta:(struct CGVector { double x0; double x1; })a0 duration:(double)a1;

@end

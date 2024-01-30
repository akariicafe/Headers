@class RCPEventSenderProperties, NSString, RCPEventEnvironment, NSMutableArray;

@interface RCPPointerTrackingChildEventStream : NSObject <RCPChildEventStream> {
    NSMutableArray *_processingEventBuffer;
}

@property (nonatomic) struct CGPoint { double x; double y; } currentPointerLocation;
@property (nonatomic) double frequency;
@property (nonatomic) double currentTimeOffset;
@property (retain, nonatomic) RCPEventEnvironment *environment;
@property (retain, nonatomic) RCPEventSenderProperties *senderProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)_currentMachTime;
- (void)advanceTime:(double)a0;
- (void).cxx_destruct;
- (void)moveToPoint:(struct CGPoint { double x0; double x1; })a0 duration:(double)a1;
- (void)_addIOHIDEventToProcessingBuffer:(struct __IOHIDEvent { } *)a0;
- (struct CGVector { double x0; double x1; })_deltaToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)moveByDelta:(struct CGVector { double x0; double x1; })a0 duration:(double)a1;
- (void)movePointerByDelta:(struct CGVector { double x0; double x1; })a0;
- (id)finalizeEventStream;
- (id)initWithCurrentPointerLocation:(struct CGPoint { double x0; double x1; })a0;

@end

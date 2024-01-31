@class NSString, AXEventRepresentation;

@interface AXBEventManager : NSObject {
    NSString *_eventTapIdentifier;
    BOOL _overrideGestureRecognitionState;
    BOOL _eventListenerEnabled;
    struct __IOHIDUserDevice { } *_userDevice;
    AXEventRepresentation *_lastHIDRecord;
}

@property (nonatomic) BOOL homeIsDown;

+ (id)sharedManager;

- (void)registerEventListener:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 fromContextId:(unsigned int)a1 displayId:(unsigned int)a2;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 toContextId:(unsigned int)a1 displayId:(unsigned int)a2;
- (unsigned int)contextIdHosterForContextId:(unsigned int)a0;
- (void)postEvent:(id)a0 systemEvent:(BOOL)a1 afterNamedTap:(id)a2 namedTaps:(id)a3;
- (void)setDisableSystemGestureRecognitionInEvents:(BOOL)a0;
- (unsigned int)contextIdForPosition:(struct CGPoint { double x0; double x1; })a0 displayId:(unsigned int)a1;
- (unsigned int)systemEventPort;
- (void)_normalizeEventForContext:(id)a0;
- (void)_processHIDEvent:(struct __IOHIDEvent { } *)a0;
- (void)clearLastRecordPostedThrougHID;
- (unsigned int)clientPortForContextId:(unsigned int)a0;
- (void)dispatchEventRepresentationToClient:(id)a0;
- (id)lastRecordPostedThroughHID;
- (unsigned int)machPortForPoint:(struct CGPoint { double x0; double x1; })a0;
- (int)systemAppPid;
- (id)windowServer;

@end

@class NSRecursiveLock, NSMutableArray, NSMutableSet;

@interface AXEventTapManager : NSObject {
    NSMutableArray *_eventTaps;
    NSMutableArray *_addedEventTapPairs;
    NSMutableSet *_removedEventTapIdentifiers;
    BOOL _isEnumeratingEventTaps;
    BOOL _shouldReorderEventTaps;
    NSRecursiveLock *_eventTapLock;
    struct __IOHIDEventSystemClient { } *_ioSystemPostBackClient;
}

@property (copy, nonatomic) id /* block */ installationGSCallback;
@property (copy, nonatomic) id /* block */ installationHIDCallback;
@property (copy, nonatomic) id /* block */ installationEventRepPost;

+ (id)sharedManager;

- (void)_installSystemEventTap:(id)a0;
- (void)_removeHIDEventTapFilter:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)sendHIDSystemEvent:(id)a0 repostCreatorHIDEvent:(BOOL)a1 senderID:(unsigned long long)a2;
- (void)setFailedToProcessInTimeCallback:(id)a0 callback:(id /* block */)a1;
- (void)dealloc;
- (void)_installEventTap:(id)a0 skipDeviceMatching:(BOOL)a1 wantsDigitizerEvents:(BOOL)a2 wantsKeyboardEvents:(BOOL)a3 wantsATVRemoteEvents:(BOOL)a4 wantsLisaEvents:(BOOL)a5 wantsMouseEvents:(BOOL)a6;
- (void)setEventTapPriority:(id)a0 priority:(int)a1;
- (void)sendHIDSystemEvent:(id)a0 senderID:(unsigned long long)a1;
- (void)_handleTestIOHIDEvent:(struct __IOHIDEvent { } *)a0;
- (void)_enumerateEventTapPairsUsingBlock:(id /* block */)a0;
- (void)_setEventTapPriority:(id)a0 priority:(int)a1;
- (id)_copyCurrentEventTapPairs;
- (id)description;
- (void)removeEventTap:(id)a0;
- (void)_installHIDFilter:(id)a0 skipDeviceMatching:(BOOL)a1 wantsDigitizerEvents:(BOOL)a2 wantsKeyboardEvents:(BOOL)a3 wantsATVRemoteEvents:(BOOL)a4 wantsLisaEvents:(BOOL)a5 wantsMouseEvents:(BOOL)a6;
- (void)_runMatchingServiceHandler:(id)a0;
- (void)_setGSEventTapCallback:(void *)a0;
- (id)installEventTap:(id /* block */)a0 identifier:(id)a1 type:(int)a2 skipDeviceMatching:(BOOL)a3 wantsDigitizerEvents:(BOOL)a4 wantsKeyboardEvents:(BOOL)a5 wantsATVRemoteEvents:(BOOL)a6 wantsLisaEvents:(BOOL)a7 wantsMouseEvents:(BOOL)a8 matchingServiceHandler:(id /* block */)a9;
- (void)_setHIDEventTapCallback:(void *)a0;
- (id)installEventTap:(id /* block */)a0 identifier:(id)a1 type:(int)a2;
- (BOOL)_processHIDEvent:(struct __IOHIDEvent { } *)a0 taskPort:(unsigned int)a1 bundleId:(id)a2;
- (void)_reorderEventTaps;
- (void)runMatchingServiceHandlerForEventTap:(id)a0;
- (void)_passivelyPeakAtHIDEventWithTarget:(void *)a0 tapPair:(id)a1 sender:(void *)a2 event:(struct __IOHIDEvent { } *)a3 axEventRep:(id)a4 didHandle:(BOOL)a5;
- (void)sendEvent:(id)a0 afterTap:(id)a1 useGSEvent:(BOOL)a2 namedTaps:(id)a3 options:(unsigned long long)a4;
- (id)installKeyboardEventTap:(id /* block */)a0 identifier:(id)a1 matchingServiceHandler:(id /* block */)a2;
- (id)installEventTap:(id /* block */)a0 identifier:(id)a1 type:(int)a2 skipDeviceMatching:(BOOL)a3 wantsDigitizerEvents:(BOOL)a4 wantsKeyboardEvents:(BOOL)a5 wantsATVRemoteEvents:(BOOL)a6 wantsLisaEvents:(BOOL)a7 wantsMouseEvents:(BOOL)a8;
- (BOOL)_processGSEvent:(struct { int x0; int x1; struct CGPoint { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; unsigned int x4; unsigned long long x5; void *x6; int x7; int x8; unsigned int x9; unsigned long long x10; unsigned char x11[0]; } *)a0;

@end

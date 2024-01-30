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

- (void)dealloc;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)removeEventTap:(id)a0;
- (id)_copyCurrentEventTapPairs;
- (void)_enumerateEventTapPairsUsingBlock:(id /* block */)a0;
- (void)_handleTestIOHIDEvent:(struct __IOHIDEvent { } *)a0;
- (id)_hidFilterListForPair:(id)a0 wantsDigitizerEvents:(BOOL)a1 wantsKeyboardEvents:(BOOL)a2 wantsATVRemoteEvents:(BOOL)a3 wantsLisaEvents:(BOOL)a4 wantsMouseEvents:(BOOL)a5 wantsAccessibilityEvents:(BOOL)a6 wantsStylusEvents:(BOOL)a7;
- (void)_installEventTap:(id)a0 skipDeviceMatching:(BOOL)a1 wantsDigitizerEvents:(BOOL)a2 wantsKeyboardEvents:(BOOL)a3 wantsATVRemoteEvents:(BOOL)a4 wantsLisaEvents:(BOOL)a5 wantsMouseEvents:(BOOL)a6 wantsAccessibilityEvents:(BOOL)a7 wantsStylusEvents:(BOOL)a8;
- (void)_installHIDFilter:(id)a0 skipDeviceMatching:(BOOL)a1 wantsDigitizerEvents:(BOOL)a2 wantsKeyboardEvents:(BOOL)a3 wantsATVRemoteEvents:(BOOL)a4 wantsLisaEvents:(BOOL)a5 wantsMouseEvents:(BOOL)a6 wantsAccessibilityEvents:(BOOL)a7 wantsStylusEvents:(BOOL)a8;
- (void)_installSystemEventTap:(id)a0;
- (void)_passivelyPeakAtHIDEventWithTarget:(void *)a0 tapPair:(id)a1 sender:(void *)a2 event:(struct __IOHIDEvent { } *)a3 axEventRep:(id)a4 didHandle:(BOOL)a5;
- (BOOL)_processHIDEvent:(struct __IOHIDEvent { } *)a0 taskPort:(unsigned int)a1 bundleId:(id)a2;
- (void)_removeHIDEventTapFilter:(id)a0;
- (void)_reorderEventTaps;
- (void)_runMatchingServiceHandler:(id)a0;
- (void)_setEventTapPriority:(id)a0 priority:(int)a1;
- (void)_setHIDEventTapCallback:(void *)a0;
- (id)installEventTap:(id /* block */)a0 identifier:(id)a1 type:(int)a2;
- (id)installEventTap:(id /* block */)a0 identifier:(id)a1 type:(int)a2 skipDeviceMatching:(BOOL)a3 wantsDigitizerEvents:(BOOL)a4 wantsKeyboardEvents:(BOOL)a5 wantsATVRemoteEvents:(BOOL)a6 wantsLisaEvents:(BOOL)a7 wantsMouseEvents:(BOOL)a8 wantsAccessibilityEvents:(BOOL)a9;
- (id)installEventTap:(id /* block */)a0 identifier:(id)a1 type:(int)a2 skipDeviceMatching:(BOOL)a3 wantsDigitizerEvents:(BOOL)a4 wantsKeyboardEvents:(BOOL)a5 wantsATVRemoteEvents:(BOOL)a6 wantsLisaEvents:(BOOL)a7 wantsMouseEvents:(BOOL)a8 wantsAccessibilityEvents:(BOOL)a9 matchingServiceHandler:(id /* block */)a10;
- (id)installEventTap:(id /* block */)a0 identifier:(id)a1 type:(int)a2 skipDeviceMatching:(BOOL)a3 wantsDigitizerEvents:(BOOL)a4 wantsKeyboardEvents:(BOOL)a5 wantsATVRemoteEvents:(BOOL)a6 wantsLisaEvents:(BOOL)a7 wantsMouseEvents:(BOOL)a8 wantsAccessibilityEvents:(BOOL)a9 wantsStylusEvents:(BOOL)a10;
- (id)installEventTap:(id /* block */)a0 identifier:(id)a1 type:(int)a2 skipDeviceMatching:(BOOL)a3 wantsDigitizerEvents:(BOOL)a4 wantsKeyboardEvents:(BOOL)a5 wantsATVRemoteEvents:(BOOL)a6 wantsLisaEvents:(BOOL)a7 wantsMouseEvents:(BOOL)a8 wantsAccessibilityEvents:(BOOL)a9 wantsStylusEvents:(BOOL)a10 matchingServiceHandler:(id /* block */)a11;
- (id)installKeyboardEventTap:(id /* block */)a0 identifier:(id)a1 matchingServiceHandler:(id /* block */)a2;
- (void)runMatchingServiceHandlerForEventTap:(id)a0;
- (void)sendEvent:(id)a0 afterTap:(id)a1 useGSEvent:(BOOL)a2 namedTaps:(id)a3 options:(unsigned long long)a4;
- (void)sendHIDSystemEvent:(id)a0 repostCreatorHIDEvent:(BOOL)a1 senderID:(unsigned long long)a2;
- (void)sendHIDSystemEvent:(id)a0 senderID:(unsigned long long)a1;
- (void)setEventTapPriority:(id)a0 priority:(int)a1;
- (void)setFailedToProcessInTimeCallback:(id)a0 callback:(id /* block */)a1;

@end

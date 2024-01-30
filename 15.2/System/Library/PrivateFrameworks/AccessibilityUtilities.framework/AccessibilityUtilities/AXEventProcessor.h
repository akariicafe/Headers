@class NSString, NSThread, NSArray, NSMutableArray;

@interface AXEventProcessor : NSObject {
    BOOL _shouldRunHIDReceiveThreadRunloop;
}

@property (retain, nonatomic) NSString *HIDEventTapIdentifier;
@property (nonatomic) int HIDEventTapPriority;
@property (retain, nonatomic) NSThread *HIDEventReceiveThread;
@property (nonatomic, getter=isHandlingHIDEvents) BOOL handlingHIDEvents;
@property (retain, nonatomic) NSMutableArray *hidActualEventTapEnabledReasons;
@property (retain, nonatomic) NSString *systemEventTapIdentifier;
@property (nonatomic) int systemEventTapPriority;
@property (nonatomic, getter=isHandlingSystemEvents) BOOL handlingSystemEvents;
@property (retain, nonatomic) NSMutableArray *systemActualEventTapEnabledReasons;
@property (nonatomic) BOOL shouldNotifyUserEventOccurred;
@property (copy, nonatomic) id /* block */ HIDEventHandler;
@property (nonatomic) unsigned long long HIDEventFilterMask;
@property (copy, nonatomic) id /* block */ failedToHandleEventInTime;
@property (readonly, nonatomic) NSArray *hidEventTapEnabledReasons;
@property (copy, nonatomic) id /* block */ systemEventHandler;
@property (nonatomic) BOOL ignoreAllSystemEvents;
@property (readonly, weak, nonatomic) NSArray *systemEventTapEnabledReasons;

- (id)initWithHIDTapIdentifier:(id)a0 HIDEventTapPriority:(int)a1 systemEventTapIdentifier:(id)a2 systemEventTapPriority:(int)a3;
- (void)restoreHIDEventTapPriorityToDefault;
- (void)beginHandlingHIDEventsForReason:(id)a0;
- (void)cleanup;
- (void)_uninstallSystemEventFilter;
- (void)raiseSystemEventTapPriorityToMaximum;
- (void)restoreSystemEventTapPriorityToDefault;
- (void)_installHIDEventFilter;
- (void)_uninstallHIDEventFilter;
- (void).cxx_destruct;
- (id)init;
- (void)_threadStop;
- (void)dealloc;
- (void)_runHIDEventReceiveThread;
- (void)endHandlingHIDEventsForReason:(id)a0;
- (void)beginHandlingSystemEventsForReason:(id)a0;
- (void)_installSystemEventFilter;
- (void)raiseHIDEventTapPriorityToMaximum;
- (void)endHandlingSystemEventsForReason:(id)a0;

@end

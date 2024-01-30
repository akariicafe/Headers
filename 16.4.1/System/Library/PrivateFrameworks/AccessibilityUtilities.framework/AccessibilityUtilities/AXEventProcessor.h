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

- (void)cleanup;
- (void)endHandlingSystemEventsForReason:(id)a0;
- (void)endHandlingHIDEventsForReason:(id)a0;
- (void)restoreSystemEventTapPriorityToDefault;
- (void)raiseSystemEventTapPriorityToMaximum;
- (void)_runHIDEventReceiveThread;
- (id)initWithHIDTapIdentifier:(id)a0 HIDEventTapPriority:(int)a1 systemEventTapIdentifier:(id)a2 systemEventTapPriority:(int)a3;
- (void)dealloc;
- (void)beginHandlingHIDEventsForReason:(id)a0;
- (void)_threadStop;
- (void)_installSystemEventFilter;
- (void)restoreHIDEventTapPriorityToDefault;
- (id)init;
- (void)_uninstallHIDEventFilter;
- (void)_uninstallSystemEventFilter;
- (void)beginHandlingSystemEventsForReason:(id)a0;
- (void)_installHIDEventFilter;
- (void)raiseHIDEventTapPriorityToMaximum;
- (void).cxx_destruct;

@end

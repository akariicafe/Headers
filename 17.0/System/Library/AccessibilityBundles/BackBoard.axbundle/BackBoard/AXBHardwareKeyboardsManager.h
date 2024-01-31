@class NSString, AXUIClient;

@interface AXBHardwareKeyboardsManager : NSObject <AXUIClientDelegate> {
    AXUIClient *_stickyKeysClient;
}

@property (copy, nonatomic) NSString *eventTapIdentifier;
@property (nonatomic) BOOL shouldNotUpdateHIDClientForNextStickyKeysEnabledChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initializeMonitor;

- (id)init;
- (void)dealloc;
- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)a0;
- (void).cxx_destruct;
- (void)_notifyServerStickyKeysDisabled;
- (void)_slowKeysAcceptanceDelayChanged;
- (void)_updateEventTap;
- (void)_notifyServerStickyKeyUpdatedForKeycode:(unsigned short)a0 usagePage:(unsigned int)a1 down:(BOOL)a2 up:(BOOL)a3 locked:(BOOL)a4;
- (void)_notifyServerStickyKeysToggledViaShift;
- (void)_slowKeysEnabledChanged;
- (id)_stickyKeysClient;
- (void)_stickyKeysEnabledChanged;
- (void)_stickyKeysShiftToggleChanged;
- (void)_updateKeyboardService:(struct __IOHIDServiceClient { } *)a0;
- (void)_updateStateForKeyboardEvent:(id)a0;

@end

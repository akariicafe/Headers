@class SCROConnection, SCRCTargetSelectorTimer, NSData, NSLock, NSMutableAttributedString;

@interface SCROBrailleClient : NSObject {
    SCROConnection *_connection;
    NSLock *_lock;
    id _delegate;
    NSMutableAttributedString *_mainStringPending;
    NSMutableAttributedString *_mainStringCache;
    NSData *_aggregatedStatusPending;
    NSData *_aggregatedStatusCache;
    SCRCTargetSelectorTimer *_deathTimer;
    BOOL _isReady;
    BOOL _needsDisplay;
    BOOL _keepConnectionAlive;
    BOOL _delegateWantsKeypresses;
    BOOL _delegateWantsReplaceTextRange;
    BOOL _wantsDisconnectMessage;
    BOOL _wantsReconnectMessage;
    BOOL _wantsDisplayConfigurationChanged;
    BOOL _displayDescriptorCallbackEnabled;
}

@property (nonatomic) BOOL inputEightDotBraille;
@property (nonatomic) BOOL wordWrapEnabled;
@property (nonatomic) BOOL autoAdvanceEnabled;
@property (nonatomic) double autoAdvanceDuration;
@property (nonatomic) int inputContractionMode;

+ (void)logBrailleRequests:(BOOL)a0;
+ (id)statusAttributeDotText;

- (int)displayMode;
- (id)init;
- (void).cxx_destruct;
- (Class)connectionClass;
- (void)dealloc;
- (void)display;
- (void)handleCallback:(id)a0;
- (BOOL)isConfigured;
- (void)setTableIdentifier:(id)a0;
- (BOOL)isConnected;
- (id)initWithDelegate:(id)a0;
- (void)setDelegate:(id)a0;
- (void)setKeepConnectionAlive:(BOOL)a0;
- (void)setDisplayDescriptorCallbackEnabled:(BOOL)a0;
- (id)driverConfiguration;
- (id)delegate;
- (void)displayIfNeeded;
- (BOOL)needsDisplay;
- (void)_deathTimerHandler;
- (id)_lazyConnection;
- (void)_registerDelegate;
- (void)setMainAttributedString:(id)a0;
- (id)mainAttributedString;
- (id)_getWorkingString;
- (void)_refreshAfterReconnect;
- (void)_setupDeviceDetection;
- (void)_deviceConnected:(id)a0;
- (BOOL)keepConnectionAlive;
- (void)loadDisplayWithBluetoothDeviceAddress:(id)a0;
- (void)removeDisplayWithBluetoothDeviceAddress:(id)a0;
- (void)setAlwaysUsesNemethCodeForTechnicalText:(BOOL)a0;
- (BOOL)alwaysUsesNemethCodeForTechnicalText;
- (id)pendingMainAttributedString;
- (void)setAnnouncementString:(id)a0;
- (void)setAlertString:(id)a0 timeout:(double)a1 priority:(int)a2;
- (void)setAggregatedStatus:(id)a0;
- (id)pendingAggregatedStatus;
- (id)aggregatedStatus;
- (void)setVirtualStatusAlignment:(int)a0;
- (int)virtualStatusAlignment;
- (void)setMasterStatusCellIndex:(long long)a0;
- (long long)masterStatusCellIndex;
- (void)setShowDotsSevenAndEight:(BOOL)a0;
- (BOOL)showDotsSevenAndEight;
- (void)setContractionMode:(int)a0;
- (int)contractionMode;
- (void)setShowEightDotBraille:(BOOL)a0;
- (BOOL)showEightDotBraille;
- (void)setAutomaticBrailleTranslationEnabled:(BOOL)a0;
- (BOOL)automaticBrailleTranslationEnabled;
- (unsigned int)persistentKeyModifiers;
- (void)setPersistentKeyModifiers:(unsigned int)a0;
- (void)setLastUserInteractionTime:(double)a0;
- (void)setExpandedStatusDisplayModeWithStatus:(id)a0;
- (void)setAnnouncementsDisplayMode;
- (void)exitCurrentDisplayMode;
- (BOOL)displayDescriptorCallbackEnabled;
- (long long)tokenForRouterIndex:(long long)a0 location:(long long *)a1 appToken:(id *)a2 forDisplayWithToken:(int)a3;
- (id)tokenArray;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfCellRepresentingCharacterAtIndex:(long long)a0;
- (void)setSelection:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 forToken:(long long)a1;
- (void)selectAllForToken:(long long)a0;
- (void)unselectAllForToken:(long long)a0;
- (void)setFocused:(BOOL)a0 forToken:(long long)a1;
- (void)simulateKeypress:(id)a0;
- (void)panDisplayLeft:(int)a0;
- (void)panDisplayRight:(int)a0;
- (void)showPreviousAnnouncement;
- (void)showNextAnnouncement;
- (void)setPrepareToMemorizeNextKey:(BOOL)a0 immediate:(BOOL)a1 forDisplayWithToken:(int)a2;
- (void)setPrimaryBrailleDisplay:(int)a0;
- (void)resetEditingManager;
- (void)setSingleLetterInputIsOn:(BOOL)a0;
- (void)setTextSearchModeIsOn:(BOOL)a0;
- (void)setBrailleChordDebounceTimeout:(double)a0;
- (void)translateBrailleToClipboard;

@end

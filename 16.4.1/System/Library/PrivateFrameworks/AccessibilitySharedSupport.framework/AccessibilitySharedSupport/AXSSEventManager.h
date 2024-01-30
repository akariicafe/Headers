@class AXSSActionManager, NSDictionary, AXSSKeyboardCommandInfo, AXSSKeyboardCommandMap;
@protocol AXSSKeyFilterDelegate;

@interface AXSSEventManager : NSObject

@property (readonly, nonatomic) NSDictionary *_commandInfos;
@property (nonatomic) BOOL _tabKeyPressed;
@property (nonatomic) BOOL _performedActionWhileTabComboPressed;
@property (nonatomic) double _lastTabPressTime;
@property (retain, nonatomic) AXSSKeyboardCommandInfo *_lastDownAndUpCommandInfo;
@property (nonatomic) double minimumDelayUntilRepeat;
@property (retain, nonatomic) AXSSActionManager *actionManager;
@property (nonatomic) unsigned long long searchType;
@property (retain, nonatomic) AXSSKeyboardCommandMap *commandMap;
@property (weak, nonatomic) id<AXSSKeyFilterDelegate> filterDelegate;
@property (nonatomic) BOOL shouldSuppressCommands;
@property (nonatomic, getter=isPassthroughModeEnabled) BOOL passthroughModeEnabled;

- (id)initWithActionManager:(id)a0;
- (void).cxx_destruct;
- (void)handleFKAEvent:(id)a0;
- (BOOL)_handleCommand:(id)a0 event:(id)a1;
- (BOOL)_handleEvent:(id)a0 forCaptureOnly:(BOOL)a1;
- (void)_handleTabComboEvent:(id)a0;
- (void)_handleTabEvent:(id)a0;
- (void)_handleTabRepeatOrUpWithCommand:(id)a0;
- (void)_performDownActionForCommand:(id)a0 info:(id)a1;
- (id)_tabbedKeyChordForKeyChord:(id)a0;
- (id)initWithActionManager:(id)a0 commandMap:(id)a1;
- (BOOL)processKeyboardCommand:(id)a0;
- (BOOL)processKeyboardEvent:(id)a0;
- (BOOL)shouldCaptureEvent:(id)a0;

@end

@class SBMainWorkspace, NSString, NSHashTable, BKSHIDEventDeferringToken, NSMutableArray, BSCompoundAssertion;
@protocol BSInvalidatable;

@interface SBWorkspaceKeyboardFocusController : NSObject <FBProcessManagerKeyboardFocusDelegate>

@property (retain, nonatomic) SBMainWorkspace *workspace;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSMutableArray *redirections;
@property (retain, nonatomic) NSMutableArray *holdAssertions;
@property (retain, nonatomic) BSCompoundAssertion *preventProcessFocusAssertion;
@property (retain, nonatomic) id<BSInvalidatable> keyboardFocusRule;
@property (retain, nonatomic) id<BSInvalidatable> compatibilityKeyboardFocusRule;
@property (retain, nonatomic) BKSHIDEventDeferringToken *keyboardFocusToken;
@property (nonatomic) int keyboardFocusPID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (id)init;
- (BOOL)_getSceneKeyboardFocusOverridePID:(int *)a0 token:(id *)a1;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (id)lockFocusToSpringBoardForReason:(id)a0;
- (void)processManager:(id)a0 didSelectKeyboardFocusProcess:(id)a1 deferringToken:(id)a2;
- (id)redirectFocusForReason:(id)a0 fromProcessIdentifier:(int)a1 fromDeferringToken:(id)a2 toProcessidentifier:(int)a3 toDeferringToken:(id)a4;
- (void)_notifyObserversDidUpdateKeyboardFocusPID:(int)a0 token:(id)a1;
- (id)initWithWorkspace:(id)a0;
- (void)updateKeyboardFocusDeferringRules;
- (id)preventFocusForProcessIdentifier:(int)a0 reason:(id)a1;

@end

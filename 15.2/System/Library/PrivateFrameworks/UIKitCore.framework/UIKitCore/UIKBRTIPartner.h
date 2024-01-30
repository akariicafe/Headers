@class NSUUID, RTIInputSystemClient, RTIDocumentTraits, RTIDocumentState, NSString;
@protocol UIKBRTIPartnerDelegate;

@interface UIKBRTIPartner : NSObject <RTIInputSystemClientDelegate, RTIInputSystemSessionDelegate>

@property (copy, nonatomic) NSUUID *currentSessionIdentifier;
@property (weak, nonatomic) id<UIKBRTIPartnerDelegate> partnerDelegate;
@property (nonatomic) BOOL inputSystemClientEnabled;
@property (readonly, nonatomic) BOOL isNotifyingDelegateOfRemoteOutputOperation;
@property (retain, nonatomic) RTIInputSystemClient *rtiClient;
@property (retain, nonatomic) RTIDocumentTraits *rtiDocumentTraits;
@property (retain, nonatomic) RTIDocumentState *rtiDocumentState;
@property (nonatomic) BOOL applicationStateIsActiveForRTI;
@property (nonatomic) BOOL viewServiceStateIsActiveForRTI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)inputDelegate;
- (void)_queued_performTextOperations:(id)a0;
- (void)inputSession:(id)a0 documentStateDidChange:(id)a1;
- (void)_updateRTIStateIfNecessary;
- (void)inputSession:(id)a0 documentTraitsDidChange:(id)a1;
- (void)updateState;
- (void)performTextOperations:(id)a0;
- (void)_viewServiceHostDidBecomeActive:(id)a0;
- (void)beginAllowingRemoteTextInput:(id)a0;
- (void)_viewServiceHostWillResignActive:(id)a0;
- (void)_macWindowChangedKey:(id)a0;
- (void)_updateRTITraitsIfNecessary;
- (id)_newRTIConnection;
- (id)_defaultRTIMachNames;
- (void)endInputSessionWithIdentifier:(id)a0;
- (void)_screenModeDidChange:(id)a0;
- (void)restartCurrentSession;
- (void)_createRTIClientIfNecessary;
- (void)endAllowingRemoteTextInput:(id)a0;
- (void).cxx_destruct;
- (void)applyRemoteDocumentStateIfNecessary:(id)a0 force:(BOOL)a1;
- (void)beginInputSessionWithIdentifier:(id)a0;
- (id)init;
- (id)delegate;
- (void)ensureRTIConnection;
- (void)_applicationWillSuspend:(id)a0;
- (void)_updateRTIAllowedAndNotify:(BOOL)a0 withReason:(id)a1;
- (void)applyRemoteDocumentTraitsIfNecessary:(id)a0 force:(BOOL)a1;
- (void)_applicationDidRemoveDeactivationReason:(id)a0;
- (void)dealloc;
- (void)_createRTIClient;
- (void)documentTraitsChanged;
- (void)_didCreateRTIClient:(id)a0;
- (void)documentStateChanged;
- (void)_performKeyboardOutputOperations:(id)a0;
- (void)_applicationWillAddDeactivationReason:(id)a0;

@end

@class NSString, ATXFeedbackSession, ATXAction, NSDate;

@interface ATXPartialIntentFeedbackManager : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ATXFeedbackSession *partialIntentSession;
@property (readonly, nonatomic) NSString *currentApp;
@property (readonly, nonatomic) NSDate *currentAppSessionStartDate;
@property (readonly, nonatomic) ATXAction *shortcutsRuntimeDonatedAction;
@property (readonly, nonatomic) NSDate *shortcutsRuntimeDonationDate;
@property (readonly, nonatomic) ATXAction *matchingAppSessionDonatedAction;
@property (readonly, nonatomic) NSDate *matchingAppSessionDonationDate;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPartialIntentSession:(id)a0 currentApp:(id)a1 currentAppSessionStartDate:(id)a2 shortcutsRuntimeDonatedAction:(id)a3 shortcutsRuntimeDonationDate:(id)a4 matchingAppSessionDonatedAction:(id)a5 matchingAppSessionDonationDate:(id)a6;
- (void)_tryEndCurrentPartialIntentSessionWithEndDate:(id)a0 uiContext:(id)a1 feedbackRouter:(id)a2;
- (void)_clearExistingPartialIntentSessionState;
- (void)_logEventBody:(id)a0;
- (void)_tryUpdateShortcutsRuntimeDonatedAction:(id)a0 eventDate:(id)a1;
- (void)_tryUpdateMatchingAppSessionDonatedAction:(id)a0 eventDate:(id)a1;
- (BOOL)isEqualToATXPartialIntentFeedbackManager:(id)a0;
- (void)trackNewPartialIntentSession:(id)a0 interactionContextEvent:(id)a1 feedbackRouter:(id)a2;
- (void)processInteractionContextEvent:(id)a0 feedbackRouter:(id)a1;
- (void)_tryUpdateCurrentAppWithInteractionContextEvent:(id)a0;

@end

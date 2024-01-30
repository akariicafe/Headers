@class ATXScreenLogUnlockSession, NSMutableArray;

@interface ATXHomeScreenLogUnlockSessionManager : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isInSession;
@property (retain, nonatomic) ATXScreenLogUnlockSession *currentSession;
@property (retain, nonatomic) NSMutableArray *completedSessions;

+ (id)currentSettings;
+ (id)_currentSettings;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)summarizeCompletedSessions;
- (long long)updateSessionStateWithUIEvent:(id)a0;
- (id)initWithIsInSession:(BOOL)a0 currentSession:(id)a1 completedSessions:(id)a2;
- (long long)_eventStatusWithUIEvent:(id)a0;
- (void)_updateCurrentSessionWithUIEvent:(id)a0 eventStatus:(long long)a1;
- (BOOL)isEqualToATXHomeScreenLogUnlockSessionManager:(id)a0;
- (id)removeCompletedSessions;

@end

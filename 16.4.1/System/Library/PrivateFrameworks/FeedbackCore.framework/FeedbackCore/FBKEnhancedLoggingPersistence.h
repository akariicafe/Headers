@class NSArray, NSString;

@interface FBKEnhancedLoggingPersistence : NSObject

@property (class, readonly) FBKEnhancedLoggingPersistence *sharedInstance;

@property (readonly, nonatomic) BOOL hasLoggingSessions;
@property (readonly, nonatomic) long long loggingSessionCount;
@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) NSArray *sessions;
@property (readonly, nonatomic) NSString *searchText;

- (void)saveSession:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)deleteSession:(id)a0;
- (void)deleteSessionWithFeedbackID:(id)a0;
- (id)deserializeSessionData:(id)a0;
- (id)mutableSessionDictionary;
- (void)saveSessionForContentItem:(id)a0 followup:(id)a1 filePredicate:(id)a2 devices:(id)a3;

@end

@class TSWPChangeSession;

@interface TSWPTestChangeSessionManager : NSObject <TSWPChangeSessionManager> {
    TSWPChangeSession *_currentSession;
}

@property (readonly, nonatomic) BOOL isTrackingChanges;

- (id)initWithContext:(id)a0;
- (void)dealloc;
- (id)changeSessionAuthorCreatedWithCommand:(id *)a0;
- (void)startNewChangeSessionIfNecessaryGettingInsertAuthorCommand:(id *)a0;

@end

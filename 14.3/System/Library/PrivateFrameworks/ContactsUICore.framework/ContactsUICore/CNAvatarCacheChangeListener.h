@class CNContactStore, NSNotificationCenter, NSData;
@protocol CNScheduler, CNAvatarCacheChangeListenerDelegate;

@interface CNAvatarCacheChangeListener : NSObject

@property (readonly, nonatomic) CNContactStore *store;
@property (readonly, weak, nonatomic) id<CNAvatarCacheChangeListenerDelegate> delegate;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) id<CNScheduler> rawPreprocessor;
@property (readonly, nonatomic) id<CNScheduler> preprocessor;
@property (copy, nonatomic) NSData *currentHistoryToken;

- (id)init;
- (void).cxx_destruct;
- (void)stop;
- (id)description;
- (void)start;
- (id)initWithContactStore:(id)a0 delegate:(id)a1;
- (void)loadCurrentHistoryToken;
- (void)databaseChanged:(id)a0;
- (id)makeDatabaseChangedTask;
- (id)makeReportingTaskWithIdentifiers:(id)a0;
- (id)makeAnalysisTask;

@end

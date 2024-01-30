@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HFAppleMusicHomeAccountManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *homeIdentifierToMediaAccountMapping;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataModelUpdateQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueryQueue;
@property (retain, nonatomic) NSMutableDictionary *homeIdentifierToActiveAMSQueriesMapping;
@property (retain, nonatomic) NSMutableDictionary *homeIdentifierToFuturePromiseMapping;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)executeHomeMediaAccountFetchForAllHomes;
- (id)_fetchMediaAccountForHome:(id)a0;
- (id)_futureForQueryLimitForHome:(id)a0;
- (void)_finishPendingPromisesWithMediaAccountInfo:(id)a0 forHome:(id)a1;
- (id)mediaAccountForHomeIdentifier:(id)a0;
- (id)executeHomeMediaAccountFetchForHome:(id)a0;
- (void)setAMSiTunesAccount:(id)a0 forHome:(id)a1 completion:(id /* block */)a2;
- (void)getHomeMediaAccountForHome:(id)a0 withCompletion:(id /* block */)a1;
- (void)applicationWillEnterForeground;

@end

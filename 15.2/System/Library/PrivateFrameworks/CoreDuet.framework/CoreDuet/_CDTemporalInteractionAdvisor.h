@class NSMutableDictionary, _CDInteractionStore, NSObject;
@protocol OS_dispatch_queue;

@interface _CDTemporalInteractionAdvisor : NSObject

@property (retain) _CDInteractionStore *store;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataQueue;
@property (retain, nonatomic) NSMutableDictionary *consumerToModelMap;
@property int settingsNotifyToken;

- (void)updateConsumerModel;
- (id)rankerForDate:(id)a0 settings:(id)a1;
- (id)initWithStore:(id)a0;
- (void).cxx_destruct;
- (id)adviseInteractionsForDate:(id)a0 usingSettings:(id)a1;
- (void)dealloc;
- (id)rankContacts:(id)a0 usingSettings:(id)a1;

@end

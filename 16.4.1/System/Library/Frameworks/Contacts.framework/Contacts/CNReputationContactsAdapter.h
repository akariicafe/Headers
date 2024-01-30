@class CNContactStore;
@protocol CNSchedulerProvider, CNScheduler;

@interface CNReputationContactsAdapter : NSObject

@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider;
@property (readonly, nonatomic) id<CNScheduler> storeScheduler;

- (id)initWithContactStore:(id)a0;
- (id)contactsForEmailAddress:(id)a0;
- (id)contactsForPhoneNumber:(id)a0;
- (id)init;
- (id)initWithContactStore:(id)a0 schedulerProvider:(id)a1;
- (void).cxx_destruct;
- (id)contactsForPredicate:(id)a0 keys:(id)a1;

@end

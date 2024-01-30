@class SGSqlEntityStore, NSString;

@interface SGSGtoCNContactsCacheUpdateAdapter : NSObject <SGJournalContactsObserver>

@property (weak, nonatomic) SGSqlEntityStore *store;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addContact:(id)a0;
- (void).cxx_destruct;
- (void)confirmContact:(id)a0;
- (id)initWithSGSqlEntityStore:(id)a0;
- (void)rejectContact:(id)a0;
- (void)removeAllStoredPseudoContacts;

@end

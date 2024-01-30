@class EDPersistenceDatabase, EDGmailLabelPersistence;

@interface EDServerMessagePersistenceFactory : NSObject

@property (readonly, nonatomic) EDPersistenceDatabase *database;
@property (readonly, nonatomic) EDGmailLabelPersistence *gmailLabelPersistence;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0 gmailLabelPersistence:(id)a1;
- (id)serverMessagePersistenceForMailboxURL:(id)a0;

@end

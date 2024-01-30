@class EDPersistenceDatabase, EDGmailLabelPersistence;

@interface EDServerMessagePersistenceFactory : NSObject

@property (readonly, nonatomic) EDPersistenceDatabase *database;
@property (readonly, nonatomic) EDGmailLabelPersistence *gmailLabelPersistence;

- (id)initWithDatabase:(id)a0 gmailLabelPersistence:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)serverMessagePersistenceForMailboxURL:(id)a0;

@end

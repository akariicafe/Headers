@class EDMessagePersistence;

@interface _EDLazyWrappedMessage : _EDWrappedMessage

@property (readonly, nonatomic) EDMessagePersistence *messagePersistence;

- (long long)databaseID;
- (void).cxx_destruct;
- (id)initWithMessage:(id)a0 messagePersistence:(id)a1;

@end

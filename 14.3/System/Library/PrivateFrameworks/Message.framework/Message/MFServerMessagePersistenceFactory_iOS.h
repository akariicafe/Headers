@class MFMailMessageLibrary;

@interface MFServerMessagePersistenceFactory_iOS : EDServerMessagePersistenceFactory

@property (weak, nonatomic) MFMailMessageLibrary *library;

- (void).cxx_destruct;
- (id)initWithLibrary:(id)a0 database:(id)a1;
- (long long)mailboxIDForMailboxURL:(id)a0 useNumericSearch:(BOOL *)a1 supportsLabels:(BOOL *)a2;

@end

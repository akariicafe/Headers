@class NSMutableDictionary, NSDate;

@interface MFMailMessageStoreSearchResult : NSObject

@property (retain, nonatomic) NSMutableDictionary *mailboxToRemoteIdDictionary;
@property (readonly, nonatomic) unsigned long long count;
@property (retain, nonatomic) NSDate *continueOffset;

- (id)init;
- (void).cxx_destruct;
- (void)addRemoteID:(id)a0 mailbox:(id)a1;
- (void)enumerateMailboxesAndRemoteIDsUsingBlock:(id /* block */)a0;

@end

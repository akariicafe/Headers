@class NSString, NSDate;

@interface ECExchangeAccount : ECAccount

@property (copy, nonatomic) NSString *inboxMailboxName;
@property (copy, nonatomic) NSString *journalMailboxName;
@property (copy, nonatomic) NSDate *lastSyncDate;
@property (copy, nonatomic) NSString *folderHierarchySyncState;

+ (id)standardPorts;
+ (id)standardSSLPorts;

- (void).cxx_destruct;
- (long long)defaultPortNumber;
- (long long)defaultSecurePortNumber;

@end

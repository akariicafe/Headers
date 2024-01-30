@class NSString, NSDate;

@interface ECExchangeAccount : ECAccount

@property (copy, nonatomic) NSString *inboxMailboxName;
@property (copy, nonatomic) NSString *journalMailboxName;
@property (copy, nonatomic) NSDate *lastSyncDate;
@property (copy, nonatomic) NSString *folderHierarchySyncState;

+ (id)standardSSLPorts;
+ (id)standardPorts;

- (long long)defaultPortNumber;
- (long long)defaultSecurePortNumber;
- (void).cxx_destruct;

@end

@class NSRecursiveLock, NSURL, MFIMAPConnection, DeliveryAccount;

@interface MFFakeMailAccount : MailAccount {
    NSURL *_URL;
    MFIMAPConnection *_cachedConnection;
    NSRecursiveLock *_flagChangesLock;
}

@property (retain, nonatomic) DeliveryAccount *deliveryAccount;
@property (nonatomic, getter=isManaged) BOOL managed;

- (id)hostname;
- (id)uniqueId;
- (int)cachePolicy;
- (unsigned int)minID;
- (id)init;
- (void).cxx_destruct;
- (id)URLString;
- (id)_URLScheme;
- (BOOL)supportsRemoteAppend;
- (BOOL)shouldFetchAgainWithError:(id)a0 foregroundRequest:(BOOL)a1;
- (id)initWithURL:(id)a0;
- (BOOL)isActive;
- (id)initWithURL:(id)a0 rootMailboxUid:(id)a1;
- (void)setUnreadCount:(unsigned int)a0 forMailbox:(id)a1;
- (id)_nameForMailboxUid:(id)a0;
- (void)setCachedConnection:(id)a0;
- (id)flagChangesForMailboxPath:(id)a0 UID:(unsigned int)a1 connectTime:(double)a2;
- (id)description;
- (BOOL)_shouldConfigureMailboxCache;
- (id)_mailboxPathPrefix;
- (id)username;
- (BOOL)willPerformActionForChokePoint:(id)a0 coalescePoint:(id)a1 result:(id *)a2;
- (void)didFinishActionForChokePoint:(id)a0 coalescePoint:(id)a1 withResult:(id)a2;
- (id)powerAssertionIdentifierWithPrefix:(id)a0;
- (BOOL)supportsFastRemoteBodySearch;
- (id)debugDescription;
- (id)displayName;
- (id)connectionForStore:(id)a0 delegate:(id)a1 options:(int)a2;
- (id)flagChangesLock;

@end

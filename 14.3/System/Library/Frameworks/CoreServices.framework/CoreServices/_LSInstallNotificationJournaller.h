@class NSString, NSMutableArray;

@interface _LSInstallNotificationJournaller : NSObject <NSSecureCoding> {
    BOOL _preliminary;
    NSString *_primaryBundleID;
    NSMutableArray *_journalledNotifications;
    unsigned long long _operationType;
    double _timestamp;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (void)createInstallJournalDirectoryIfRequired;
+ (BOOL)shouldJournalNotificationType:(int)a0;

- (id)journalURL;
- (BOOL)entityExists;
- (id)primaryBundleID;
- (void)removeJournalFile;
- (void)writeFinalJournal;
- (void)setPrimaryBundleID:(id)a0;
- (BOOL)isApplicationRegisteredWithbundleID:(id)a0 placeholder:(BOOL)a1;
- (id)initWithPrimaryBundleID:(id)a0 operation:(unsigned long long)a1;
- (unsigned long long)installOperation;
- (id)synthesizedPreliminaryJournalledNotifications;
- (void)removeJournalAfterNotificationFence;
- (BOOL)applicableForCurrentDatabase;
- (void)_writeJournalUnconditionally;
- (id)journalledNotifications;
- (void)writePreliminaryJournal;
- (BOOL)shouldExpectEntityToExist;
- (double)timestamp;
- (void).cxx_destruct;
- (void)sendNotification:(int)a0 forApps:(id)a1 withPlugins:(BOOL)a2;
- (void)sendNotification:(int)a0 forApps:(id)a1 withPlugins:(BOOL)a2 options:(id)a3;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

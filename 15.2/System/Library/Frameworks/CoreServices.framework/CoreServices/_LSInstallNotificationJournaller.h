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
- (BOOL)isApplicationRegisteredWithbundleID:(id)a0 placeholder:(BOOL)a1;
- (id)synthesizedPreliminaryJournalledNotifications;
- (id)primaryBundleID;
- (unsigned long long)installOperation;
- (id)initWithPrimaryBundleID:(id)a0 operation:(unsigned long long)a1;
- (void)removeJournalFile;
- (void)writeFinalJournal;
- (void)removeJournalAfterNotificationFence;
- (BOOL)shouldExpectEntityToExist;
- (void)setPrimaryBundleID:(id)a0;
- (id)journalledNotifications;
- (void)writePreliminaryJournal;
- (BOOL)applicableForCurrentDatabase;
- (void)_writeJournalUnconditionally;
- (void)encodeWithCoder:(id)a0;
- (double)timestamp;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)sendNotification:(int)a0 forApps:(id)a1 withPlugins:(BOOL)a2 options:(id)a3;
- (void)sendNotification:(int)a0 forApps:(id)a1 withPlugins:(BOOL)a2;

@end

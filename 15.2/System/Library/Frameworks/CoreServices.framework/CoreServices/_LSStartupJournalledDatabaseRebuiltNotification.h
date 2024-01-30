@class NSString;

@interface _LSStartupJournalledDatabaseRebuiltNotification : NSObject <_LSStartupJournalledNotification>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedNotification;

- (void)dispatchToObserver:(id)a0 forInstallProgressService:(id)a1;

@end

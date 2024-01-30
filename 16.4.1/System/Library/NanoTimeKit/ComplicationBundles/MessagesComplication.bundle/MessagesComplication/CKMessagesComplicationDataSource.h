@class NSString, NSDictionary, CKMessagesComplicationSpecs, NSObject, DMFCommunicationPolicyMonitor;
@protocol OS_os_log;

@interface CKMessagesComplicationDataSource : CLKCComplicationBundleDataSource <CKMessagesComplicationDataProviderSubscriber>

@property (retain, nonatomic) CKMessagesComplicationSpecs *specs;
@property (nonatomic) unsigned long long unreadCount;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) DMFCommunicationPolicyMonitor *communicationPolicyMonitor;
@property (retain, nonatomic) NSDictionary *communicationPolicies;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)appIdentifier;
+ (id)localizedAppName;
+ (BOOL)acceptsComplicationFamily:(long long)a0 forDevice:(id)a1;
+ (id)legacyNTKComplicationType;

- (void)dealloc;
- (void).cxx_destruct;
- (id)currentSwitcherTemplate;
- (void)getCurrentTimelineEntryWithHandler:(id /* block */)a0;
- (void)getLaunchURLForTimelineEntryDate:(id)a0 timeTravelDate:(id)a1 withHandler:(id /* block */)a2;
- (id)initWithComplication:(id)a0 family:(long long)a1 forDevice:(id)a2;
- (id)lockedTemplate;
- (id)privacyTemplate;
- (void)_updateCommunicationPolicies;
- (id)drawUnreadCount:(unsigned long long)a0 ontoImage:(id)a1 family:(long long)a2 template:(id)a3;
- (id)fullColorImageProviderForUnreadCount:(unsigned long long)a0 family:(long long)a1 template:(id)a2;
- (id)imageProviderForUnreadCount:(unsigned long long)a0 family:(long long)a1 template:(id)a2;
- (void)setDefaultBackgroundForTemplate:(id)a0;
- (id)simpleTintableImageOverImage:(id)a0 withContext:(id)a1;
- (id)templateForFamily:(long long)a0 unreadCount:(unsigned long long)a1 locked:(BOOL)a2 privacy:(BOOL)a3;
- (id)textProviderForUnreadCount:(unsigned long long)a0 locked:(BOOL)a1 privacy:(BOOL)a2 shortText:(BOOL)a3 tintColor:(id)a4;
- (void)unreadCountDidChange:(unsigned long long)a0;

@end

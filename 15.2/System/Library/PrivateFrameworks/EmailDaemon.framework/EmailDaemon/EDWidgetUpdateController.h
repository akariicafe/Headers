@class NSArray, NSString, NSDate, NSObject;
@protocol OS_os_log;

@interface EDWidgetUpdateController : NSObject <EFLoggable, EDMessageChangeHookResponder>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) NSArray *timelineControllers;
@property (retain, nonatomic) NSDate *lastUpdate;
@property (nonatomic) long long numberOfUpdates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)persistenceDidChangeFlags:(id)a0 messages:(id)a1 generationWindow:(id)a2;
- (void)_runActivity;
- (void)_scheduleActivity;
- (void)_writeUserDefaults;
- (id)initWithWidgetBundleIdentifier:(id)a0 widgetKindIdentifiers:(id)a1 hookRegistry:(id)a2;
- (void)_refreshTimelines;
- (long long)_activityDelay;
- (void)_updateLastUpdateInformation;
- (void).cxx_destruct;
- (void)_restoreFromUserDefaults;
- (void)dealloc;
- (void)persistenceDidAddMessages:(id)a0 generationWindow:(id)a1;

@end

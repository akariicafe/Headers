@class NSUserDefaults, NSString, NSDate;

@interface VSPreferencesInterface : NSObject

@property (class, readonly) VSPreferencesInterface *defaultInstance;

@property (retain, nonatomic) NSUserDefaults *defaults;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;
@property (retain, nonatomic) NSDate *OOBTriggeredDate;
@property (nonatomic) BOOL OOBNeedsToBeMeasured;
@property (retain, nonatomic) NSDate *lastTTSRequestDate;
@property (readonly, nonatomic) NSString *deviceUUID;

+ (id)dictionaryRepresentationOfVoices:(id)a0;

- (void)setSubscribedVoices:(id)a0 forClientID:(id)a1 accessoryID:(id)a2;
- (void)dealloc;
- (void)migrateDefaults;
- (void)removeSubscriptionsForAccessory:(id)a0;
- (id)initWithSuiteName:(id)a0;
- (id)subscribedVoicesForClientID:(id)a0 accessoryID:(id)a1;
- (void).cxx_destruct;

@end

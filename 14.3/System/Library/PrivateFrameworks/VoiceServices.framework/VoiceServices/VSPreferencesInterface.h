@class NSString, NSUserDefaults, NSDate;

@interface VSPreferencesInterface : NSObject

@property (retain, nonatomic) NSUserDefaults *defaults;
@property (retain, nonatomic) NSDate *lastTTSRequestDate;
@property (readonly, nonatomic) NSString *deviceUUID;

+ (id)defaultInstance;

- (void)migrateDefaults;
- (void).cxx_destruct;
- (id)autoDownloadedVoicesForClientID:(id)a0;
- (void)setAutoDownloadedVoices:(id)a0 withClientID:(id)a1;
- (id)initWithSuiteName:(id)a0;

@end

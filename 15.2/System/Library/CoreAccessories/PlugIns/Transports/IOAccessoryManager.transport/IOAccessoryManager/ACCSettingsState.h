@class NSString;

@interface ACCSettingsState : NSObject

@property (readonly, nonatomic) long long defaultValue;
@property (readonly, nonatomic) long long invalidValue;
@property (readonly, nonatomic) long long intValue;
@property (readonly, nonatomic) BOOL boolValue;
@property (readonly, nonatomic) BOOL exists;
@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) NSString *applicationID;
@property (readonly, nonatomic) NSString *notificationName;

- (id)description;
- (void)update;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithKey:(id)a0 applicationID:(id)a1 notification:(id)a2 defaultValue:(long long)a3 invalidValue:(long long)a4;
- (void)_readLoggingPrefs;
- (void)_registerForLoggingPrefsNotification;

@end

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SORealmSettingManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *realmSettings;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *settingsQueue;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)loadRealmSettings;
- (void)saveRealmSettings;
- (id)settingsForRealm:(id)a0;
- (void)removeRealm:(id)a0;

@end

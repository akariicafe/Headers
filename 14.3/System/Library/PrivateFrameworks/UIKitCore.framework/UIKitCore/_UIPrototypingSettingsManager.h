@class NSArray, NSMutableDictionary;

@interface _UIPrototypingSettingsManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *storedSettings;
@property (readonly, nonatomic) NSArray *allSettings;

+ (id)sharedManager;

- (id)settingOfType:(long long)a0 withName:(id)a1;
- (id)init;
- (void)deleteAllStoredSettings;
- (void).cxx_destruct;
- (void)synchronizeStoredSettings;

@end

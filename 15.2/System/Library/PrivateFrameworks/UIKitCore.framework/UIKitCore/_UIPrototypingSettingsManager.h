@class NSArray, NSMutableDictionary;

@interface _UIPrototypingSettingsManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *storedSettings;
@property (readonly, nonatomic) NSArray *allSettings;

+ (id)sharedManager;

- (void)synchronizeStoredSettings;
- (id)settingOfType:(long long)a0 withName:(id)a1;
- (void)deleteAllStoredSettings;
- (void).cxx_destruct;
- (id)init;

@end

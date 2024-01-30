@class TRIKVStore;

@interface TRIPersistentUserSettings : NSObject

@property (retain, nonatomic) TRIKVStore *keyValueStore;

+ (id)settingsWithKeyValueStore:(id)a0;

- (id)persistedSiriLocale;
- (id)initWithKeyValueStore:(id)a0;
- (void)persistOptOutStatus:(unsigned char)a0;
- (unsigned char)persistedOptOutStatus;
- (unsigned char)persistedIsSiriEnabled;
- (void)persistIsSiriEnabled:(unsigned char)a0;
- (void)persistSiriLocale:(id)a0;
- (void).cxx_destruct;

@end

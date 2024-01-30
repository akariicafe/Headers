@class NSUserDefaults, NSDate;

@interface SiriUIPreferences : NSObject {
    NSUserDefaults *_userDefaults;
    long long _numberOfTimesSiriCardShown;
    BOOL _voiceRequestMadeWhileInCarDND;
    NSDate *_previousSiriRequestErrorTimestamp;
    long long _siriRequestErrorCount;
}

+ (id)sharedPreferences;

- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (long long)integerForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setInteger:(long long)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)objectForKey:(id)a0;
- (BOOL)boolForKey:(id)a0;
- (BOOL)voiceRequestMadeWhileInCarDND;
- (long long)numberOfTimesCarDNDSiriCardShown;
- (void)setNumberOfTimesCarDNDSiriCardShown:(long long)a0;
- (id)previousSiriRequestErrorTimestamp;
- (void)setPreviousSiriRequestErrorTimestamp:(id)a0;
- (long long)siriRequestErrorCount;
- (void)setSiriRequestErrorCount:(long long)a0;
- (void)setVoiceRequestMadeWhileInCarDND:(BOOL)a0;

@end

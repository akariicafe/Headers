@class NSUserDefaults, NSDate;

@interface SiriUIPreferences : NSObject {
    NSUserDefaults *_userDefaults;
    long long _numberOfTimesSiriCardShown;
    BOOL _voiceRequestMadeWhileInCarDND;
    NSDate *_previousSiriRequestErrorTimestamp;
    long long _siriRequestErrorCount;
}

+ (id)sharedPreferences;

- (id)objectForKey:(id)a0;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (id)init;
- (void)setInteger:(long long)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (BOOL)boolForKey:(id)a0;
- (long long)integerForKey:(id)a0;
- (BOOL)voiceRequestMadeWhileInCarDND;
- (long long)numberOfTimesCarDNDSiriCardShown;
- (void)setNumberOfTimesCarDNDSiriCardShown:(long long)a0;
- (id)previousSiriRequestErrorTimestamp;
- (void)setPreviousSiriRequestErrorTimestamp:(id)a0;
- (long long)siriRequestErrorCount;
- (void)setSiriRequestErrorCount:(long long)a0;
- (void)setVoiceRequestMadeWhileInCarDND:(BOOL)a0;

@end

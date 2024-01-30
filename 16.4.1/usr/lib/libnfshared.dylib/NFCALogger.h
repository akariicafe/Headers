@class NSUserDefaults;

@interface NFCALogger : NSObject {
    NSUserDefaults *_userDefault;
}

+ (id)sharedCALogger;
+ (unsigned int)getBatteryPercent;

- (BOOL)restrictedMode;
- (id)generateDailyUUIDForCA;
- (void)setRestrictedMode:(BOOL)a0;
- (unsigned long long)getTimestamp;
- (void)postCAEventFor:(id)a0 eventInput:(id)a1;
- (id)getCALoggerUserDefaults;
- (void)resetCALoadStackExceptionCount;
- (id)generateUUID;
- (unsigned long long)getMiddlewareExceptionCount;
- (unsigned int)getDurationFrom:(unsigned long long)a0;
- (id)init;
- (unsigned int)getHardwareTypeForCA:(unsigned int)a0;
- (void)getCAUniversityCode:(id)a0 universityCodes:(unsigned int *)a1;
- (BOOL)_incrementMiddlewareExceptionCountWithReset:(BOOL)a0;
- (void).cxx_destruct;
- (void)removeRestrictedMode;

@end

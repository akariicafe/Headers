@interface _SWCPrefs : NSObject

@property (class, readonly) _SWCPrefs *sharedPrefs;

@property (readonly) unsigned long long maximumRetryCount;
@property (readonly) double retryIntervalAfterFailure;
@property (readonly) double retryIntervalAfterSuccess;
@property (readonly) BOOL verifyExtendedValidation;
@property (readonly, getter=isAppleInternal) BOOL appleInternal;
@property (readonly, getter=isFastCheckEnabled) BOOL fastCheckEnabled;

- (unsigned long long)_recheckFuzzForSuccess:(BOOL)a0;
- (id)_init;
- (id)_stringForKey:(id)a0 defaultValue:(id)a1;
- (unsigned long long)_unsignedIntegerForKey:(id)a0 defaultValue:(unsigned long long)a1;
- (id)containerURLReturningError:(id *)a0;
- (BOOL)_boolForKey:(id)a0 defaultValue:(BOOL)a1;
- (void)_setString:(id)a0 forKey:(id)a1;
- (double)retryIntervalAfterReachLimitWithFailure:(unsigned long long)a0;
- (unsigned long long)_unsignedIntegerForKey:(id)a0 defaultValue:(unsigned long long)a1 minimumValue:(unsigned long long)a2 maximumValue:(unsigned long long)a3;
- (id)descriptionOfAllPrefs;
- (double)retryIntervalAfterSuccess:(BOOL)a0;

@end

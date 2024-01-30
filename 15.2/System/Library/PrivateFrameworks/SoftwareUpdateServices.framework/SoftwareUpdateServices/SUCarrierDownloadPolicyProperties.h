@class NSMutableDictionary;

@interface SUCarrierDownloadPolicyProperties : NSObject <NSSecureCoding> {
    NSMutableDictionary *_keyMap;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (BOOL)_boolForKey:(id)a0 defaultValue:(BOOL)a1;
- (id)_numberForKey:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (long long)_integerForKey:(id)a0 defaultValue:(long long)a1;
- (id)description;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (unsigned long long)_unsignedIntegerForKey:(id)a0 defaultValue:(long long)a1;
- (long long)_longLongForKey:(id)a0 defaultValue:(long long)a1;
- (BOOL)_isValidHour:(long long)a0;
- (BOOL)isDownloadFree;
- (BOOL)isDownloadAllowable;
- (BOOL)isDownloadAllowableOver2G;
- (BOOL)isAutoDownloadAllowable;
- (long long)maximumDownloadSizeInBytes;
- (unsigned long long)numberOfDaysToWaitForCellularDownload;
- (long long)peakStartHour;
- (long long)peakEndHour;
- (BOOL)allowInexpensiveHDMUnlimited;

@end

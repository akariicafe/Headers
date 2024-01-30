@class NSMutableDictionary;

@interface SUCarrierDownloadPolicyProperties : NSObject <NSSecureCoding> {
    NSMutableDictionary *_keyMap;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)_unsignedIntegerForKey:(id)a0 defaultValue:(long long)a1;
- (long long)_integerForKey:(id)a0 defaultValue:(long long)a1;
- (BOOL)_boolForKey:(id)a0 defaultValue:(BOOL)a1;
- (void)dealloc;
- (id)init;
- (id)description;
- (id)_numberForKey:(id)a0;
- (BOOL)_isValidHour:(long long)a0;
- (long long)_longLongForKey:(id)a0 defaultValue:(long long)a1;
- (BOOL)allowInexpensiveHDMUnlimited;
- (BOOL)isAutoDownloadAllowable;
- (BOOL)isDownloadAllowable;
- (BOOL)isDownloadAllowableOver2G;
- (BOOL)isDownloadFree;
- (long long)maximumDownloadSizeInBytes;
- (unsigned long long)numberOfDaysToWaitForCellularDownload;
- (long long)peakEndHour;
- (long long)peakStartHour;

@end

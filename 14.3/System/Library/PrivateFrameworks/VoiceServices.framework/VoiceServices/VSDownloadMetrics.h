@class NSString, NSNumber;

@interface VSDownloadMetrics : NSObject

@property (readonly) NSString *voiceDownloadKey;
@property (readonly) long long downloadBeginTimestamp;
@property (readonly) long long downloadEndTimestamp;
@property (copy) NSString *clientBundleIdentifier;
@property BOOL isCellularAllowed;
@property BOOL discretionary;
@property (copy) NSNumber *downloadSize;
@property float downloadProgress;
@property long long errorCode;

+ (double)_clockFactor;

- (void).cxx_destruct;
- (double)downloadDuration;
- (id)dictionaryMetrics;
- (id)description;
- (id)initWithVoiceName:(id)a0 languageCode:(id)a1 gender:(long long)a2;
- (BOOL)endMetrics;

@end

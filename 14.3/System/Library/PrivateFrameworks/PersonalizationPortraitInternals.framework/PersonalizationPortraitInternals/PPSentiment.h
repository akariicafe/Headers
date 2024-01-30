@class _PASLock, _PASNotificationToken;

@interface PPSentiment : NSObject {
    float _weightBucketSize;
    float _intercept;
    _PASLock *_lock;
    _PASNotificationToken *_assetUpdateNotificationToken;
}

+ (id)sharedInstance;

- (BOOL)_loadAssetData;
- (id)init;
- (void).cxx_destruct;
- (float)sentimentScoreForText:(id)a0;
- (float)_idxToFloat:(unsigned long long)a0;

@end

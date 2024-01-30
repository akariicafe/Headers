@class _PASLock, _PASNotificationToken;

@interface PPSentiment : NSObject {
    float _weightBucketSize;
    float _intercept;
    _PASLock *_lock;
    _PASNotificationToken *_assetUpdateNotificationToken;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (float)sentimentScoreForText:(id)a0;

@end

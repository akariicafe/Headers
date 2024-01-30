@class _PASLock, NSString, _PASNotificationToken;

@interface PPTextToTopicTransform : NSObject {
    _PASLock *_lock;
    NSString *_vocabularyPath;
    NSString *_weightsPath;
    NSString *_mappingId;
    _PASNotificationToken *_assetUpdateNotificationToken;
}

@property (readonly, nonatomic) unsigned long long outputTopicCount;
@property (readonly, nonatomic) float threshold;

+ (id)sharedInstance;

- (id)_initWithVocabulary:(id)a0 weights:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)_payloadForTopic:(unsigned int)a0;
- (BOOL)_updateFromAssetData;
- (id)_init;
- (void)iterateTopicsForText:(id)a0 block:(id /* block */)a1;

@end

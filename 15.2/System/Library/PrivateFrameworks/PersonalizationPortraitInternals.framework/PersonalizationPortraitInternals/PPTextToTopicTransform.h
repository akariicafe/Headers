@class _PASLock, NSString, _PASNotificationToken;
@protocol TRINotificationToken;

@interface PPTextToTopicTransform : NSObject {
    _PASLock *_lock;
    id<TRINotificationToken> _trialToken;
    NSString *_vocabularyPath;
    NSString *_weightsPath;
    NSString *_mappingId;
    _PASNotificationToken *_assetUpdateNotificationToken;
}

@property (readonly, nonatomic) unsigned long long outputTopicCount;
@property (readonly, nonatomic) float threshold;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)_init;
- (void)dealloc;
- (void)iterateTopicsForText:(id)a0 block:(id /* block */)a1;
- (id)_initWithVocabulary:(id)a0 weights:(id)a1;
- (id)_payloadForTopic:(unsigned int)a0;

@end

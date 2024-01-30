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

- (id)_init;
- (void)dealloc;
- (id)_initWithVocabulary:(id)a0 weights:(id)a1;
- (void)iterateTopicsForText:(id)a0 block:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;
- (id)_payloadForTopic:(unsigned int)a0;

@end

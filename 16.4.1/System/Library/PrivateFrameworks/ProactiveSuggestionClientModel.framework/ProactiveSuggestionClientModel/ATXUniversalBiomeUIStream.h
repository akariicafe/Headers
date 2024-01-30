@class _PASLock, BMStoreConfig;

@interface ATXUniversalBiomeUIStream : NSObject {
    BMStoreConfig *_storeConfig;
    _PASLock *_lock;
}

- (id)initWithStoreConfig:(id)a0;
- (id)streamIdentifiers;
- (id)_streamIdForConsumerSubType:(unsigned char)a0;
- (id)genericEventPublisherFromStartTime:(double)a0;
- (id)deprecatedGenericEventPublisherFromStartTime:(double)a0;
- (id)genericEventPublisherFromStartTime:(double)a0 consumerSubType:(unsigned char)a1;
- (id)init;
- (id)_innerStreamForConsumerSubType:(unsigned char)a0;
- (void)donateGenericUIEvent:(id)a0;
- (id)_validUIStreamConsumerSubTypes;
- (void).cxx_destruct;
- (id)_innerStreamForStreamId:(id)a0;

@end

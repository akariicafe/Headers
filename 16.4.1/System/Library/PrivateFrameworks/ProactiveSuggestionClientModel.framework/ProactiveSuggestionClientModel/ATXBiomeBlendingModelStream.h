@class _PASLock, BMStoreConfig;

@interface ATXBiomeBlendingModelStream : NSObject {
    BMStoreConfig *_storeConfig;
    _PASLock *_lock;
}

- (id)initWithStoreConfig:(id)a0;
- (id)streamIdentifiers;
- (id)publisherFromStartTime:(double)a0;
- (id)_validBlendingStreamConsumerSubTypes;
- (id)_streamIdForConsumerSubType:(unsigned char)a0;
- (id)publisherFromStartTime:(double)a0 consumerSubType:(unsigned char)a1;
- (void)donateBlendingModelUICacheUpdate:(id)a0;
- (id)init;
- (id)_innerStreamForConsumerSubType:(unsigned char)a0;
- (void).cxx_destruct;
- (id)_innerStreamForStreamId:(id)a0;
- (id)deprecatedPublisherFromStartTime:(double)a0;

@end

@class NSString, BMStoreEnumerator, BMStoreBookmark, BMStoreConfig;

@interface BPSBiomeStorePublisher : BPSPublisher <BMBookmarkablePublisher> {
    NSString *_streamId;
    BMStoreConfig *_storeConfig;
    double _startTime;
    BMStoreEnumerator *_enumerator;
    BMStoreBookmark *_bookmark;
}

@property (nonatomic) BOOL nilEnumerator;

- (void)subscribe:(id)a0;
- (void).cxx_destruct;
- (id)withStartTime:(double)a0;
- (void)_configEnumeratorWithStartTime:(double)a0;
- (id)initWithStreamId:(id)a0 storeConfig:(id)a1;
- (id)bookmarkableUpstreams;
- (id)withBookmark:(id)a0;
- (void)_configEnumeratorWithBookmark:(id)a0;
- (id)enumerator;

@end

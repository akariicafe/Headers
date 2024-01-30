@class BMFrameStore, BMStreamDatastoreBase, BMStreamMetadata, BMStoreBookmark;

@interface BMStoreEnumeratorBase : NSObject {
    unsigned long long _frameStoreOffset;
    double _iterationStartTime;
    double _endTime;
    unsigned long long _maxEvents;
    unsigned long long _eventCount;
    unsigned long long _lastEventCount;
    unsigned long long _options;
    BMStreamMetadata *_metadata;
}

@property (readonly, nonatomic) BMFrameStore *currentFrameStore;
@property (readonly, nonatomic) BMStreamMetadata *metadata;
@property (readonly, nonatomic) BMStreamDatastoreBase *ds;
@property (readonly, nonatomic) BMStoreBookmark *bookmark;

- (id)initWithStreamDatastore:(id)a0 startTime:(double)a1 endTime:(double)a2 maxEvents:(unsigned long long)a3 lastN:(unsigned long long)a4 options:(unsigned long long)a5;
- (void)setFrameStoreOffset:(unsigned long long)a0;
- (id)initWithStreamDatastore:(id)a0 bookmark:(id)a1 options:(unsigned long long)a2;
- (id)peekEvent;
- (BOOL)isDataAccessible;
- (id)_eventWithFrameStore:(id)a0 frame:(id)a1 error:(unsigned char)a2;
- (id)initWithStreamDatastore:(id)a0 currentFrameStore:(id)a1 frameStoreOffset:(unsigned long long)a2 iterationStartTime:(double)a3 endTime:(double)a4 maxEvents:(unsigned long long)a5 lastN:(unsigned long long)a6 options:(unsigned long long)a7;
- (id)nextEvent;
- (id)copyNextEventAndMoveBookmark:(BOOL)a0 makeEvent:(id /* block */)a1;
- (void)nextEventWithContext:(id /* block */)a0;
- (BOOL)advanceBookmarkToStartTime:(double)a0 eventsFound:(unsigned long long *)a1 lastN:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)copyNextEventAndMoveBookmark:(BOOL)a0;

@end

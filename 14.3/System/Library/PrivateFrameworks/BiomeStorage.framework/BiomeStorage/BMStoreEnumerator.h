@class BMStreamDatastore, BMStoreBookmark, BMFrameStore;

@interface BMStoreEnumerator : NSObject {
    BMStreamDatastore *_ds;
    unsigned long long _frameStoreOffset;
    double _iterationStartTime;
}

@property (readonly, nonatomic) BMFrameStore *currentFrameStore;
@property (readonly, nonatomic) BMStoreBookmark *bookmark;

- (id)initWithStreamDatastore:(id)a0 startTime:(double)a1;
- (void)nextEventWithContext:(id /* block */)a0;
- (id)copyNextEventAndMoveBookmark:(BOOL)a0;
- (void)dealloc;
- (id)copyPeekUntypedEvent;
- (id)initWithStreamDatastore:(id)a0 currentFrameStore:(id)a1 frameStoreOffset:(unsigned long long)a2 iterationStartTime:(double)a3;
- (id)copyPeekEvent;
- (id)copyNextEvent;
- (id)initWithStreamDatastore:(id)a0 bookmark:(id)a1;
- (id)copyNextUntypedEvent;

@end

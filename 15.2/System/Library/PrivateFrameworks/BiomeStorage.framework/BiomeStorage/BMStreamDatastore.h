@class BMStreamTombstoneEventDatastore;

@interface BMStreamDatastore : BMStreamDatastoreBase {
    BMStreamTombstoneEventDatastore *_tombstoneStore;
}

@property (readonly, nonatomic) BOOL includeTombstones;

- (id)initWithStream:(id)a0 streamPath:(id)a1 permission:(unsigned long long)a2 config:(id)a3 includeTombstones:(BOOL)a4;
- (void)writeTombstoneEventWithSegmentName:(id)a0 offset:(unsigned long long)a1 length:(unsigned long long)a2 reason:(unsigned long long)a3 outTombstoneBookmark:(id *)a4;
- (id)tombstoneStore;
- (void)didMarkFrameAsRemovedWithSegmentName:(id)a0 frame:(id)a1 reason:(unsigned long long)a2 outTombstoneBookmark:(id *)a3;
- (id)initWithStream:(id)a0 permission:(unsigned long long)a1 config:(id)a2 includeTombstones:(BOOL)a3;
- (void).cxx_destruct;
- (id)newTombstoneEnumeratorFromStartTime:(double)a0;
- (void)writeTombstoneEventWithSegmentName:(id)a0 offset:(unsigned long long)a1 length:(unsigned long long)a2 reason:(unsigned long long)a3;
- (BOOL)updatePruningPolicy:(id)a0;
- (id)initForWritingWithStream:(id)a0 config:(id)a1 includeTombstones:(BOOL)a2;
- (id)newTombstoneEnumeratorFromBookmark:(id)a0;
- (void)didMarkFrameAsRemovedWithSegmentName:(id)a0 frame:(id)a1 reason:(unsigned long long)a2;
- (id)initForPruningWithStream:(id)a0 config:(id)a1 includeTombstones:(BOOL)a2;
- (id)initForReadingWithStream:(id)a0 config:(id)a1 includeTombstones:(BOOL)a2;

@end

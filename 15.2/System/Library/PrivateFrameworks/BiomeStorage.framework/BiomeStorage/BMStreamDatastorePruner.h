@class BMStreamDatastore;

@interface BMStreamDatastorePruner : NSObject {
    BMStreamDatastore *_inner;
}

@property (readonly, nonatomic) BOOL canReadOrPruneData;

- (Class)eventBodyClass;
- (void)eventsFrom:(double)a0 to:(double)a1 reason:(unsigned long long)a2 shouldDeleteUsingBlock:(id /* block */)a3;
- (id)newEnumeratorFromBookmark:(id)a0;
- (id)newEnumeratorFromStartTime:(double)a0;
- (void)syncMappedFiles;
- (id)fetchEventsFrom:(double)a0 to:(double)a1;
- (void)removeEventsFrom:(double)a0 to:(double)a1 usingBlock:(id /* block */)a2;
- (id)streamIdentifier;
- (void).cxx_destruct;
- (BOOL)deleteEventAtBookmark:(id)a0 outTombstoneBookmark:(id *)a1;
- (id)initWithStream:(id)a0 config:(id)a1;
- (void)removeEventsFrom:(double)a0 to:(double)a1 callback:(id /* block */)a2;
- (void)eventsFrom:(double)a0 to:(double)a1 shouldDeleteUsingBlock:(id /* block */)a2;
- (void)removeEventsFrom:(double)a0 to:(double)a1 reason:(unsigned long long)a2 usingBlock:(id /* block */)a3;

@end

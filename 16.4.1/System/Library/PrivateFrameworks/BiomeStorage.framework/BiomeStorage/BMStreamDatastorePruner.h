@class BMStreamDatastore;
@protocol BMStreamDatastorePruningDelegate;

@interface BMStreamDatastorePruner : NSObject <BMStreamDatastorePruningDelegate> {
    BMStreamDatastore *_inner;
}

@property (weak, nonatomic) id<BMStreamDatastorePruningDelegate> delegate;
@property (readonly, nonatomic) BOOL canReadOrPruneData;

- (id)newEnumeratorFromStartTime:(double)a0;
- (Class)eventBodyClass;
- (id)newEnumeratorFromBookmark:(id)a0;
- (id)initWithStream:(id)a0 config:(id)a1;
- (void)eventsFrom:(double)a0 to:(double)a1 reason:(unsigned long long)a2 shouldDeleteUsingBlock:(id /* block */)a3;
- (id)fetchEventsFrom:(double)a0 to:(double)a1;
- (BOOL)deleteEventAtBookmark:(id)a0 outTombstoneBookmark:(id *)a1;
- (void)eventsFrom:(double)a0 to:(double)a1 shouldDeleteUsingBlock:(id /* block */)a2;
- (void)syncMappedFiles;
- (void)didPruneEvents;
- (void)removeEventsFrom:(double)a0 to:(double)a1 usingBlock:(id /* block */)a2;
- (id)streamIdentifier;
- (void)willPruneEvent:(id)a0;
- (void)removeEventsFrom:(double)a0 to:(double)a1 reason:(unsigned long long)a2 usingBlock:(id /* block */)a3;
- (void).cxx_destruct;
- (void)removeEventsFrom:(double)a0 to:(double)a1 callback:(id /* block */)a2;

@end

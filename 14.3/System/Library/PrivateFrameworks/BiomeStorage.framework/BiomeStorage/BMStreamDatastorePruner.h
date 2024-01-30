@class BMStreamsAccessClient, BMStreamDatastore;

@interface BMStreamDatastorePruner : NSObject {
    BMStreamDatastore *_inner;
    BMStreamsAccessClient *_accessClient;
}

- (id)newEnumeratorFromStartTime:(double)a0;
- (id)streamIdentifier;
- (void)dealloc;
- (void)eventsFrom:(double)a0 to:(double)a1 shouldDeleteUsingBlock:(id /* block */)a2;
- (id)newEnumeratorFromBookmark:(id)a0;
- (void)removeEventsFrom:(double)a0 to:(double)a1 usingBlock:(id /* block */)a2;
- (void)removeEventsFrom:(double)a0 to:(double)a1 callback:(id /* block */)a2;
- (Class)eventClass;
- (void)syncMappedFiles;
- (id)initWithStream:(id)a0 config:(id)a1;
- (id)fetchEventsFrom:(double)a0 to:(double)a1;

@end

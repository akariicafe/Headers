@class BMStreamDatastore;

@interface BMStreamDatastoreReader : NSObject {
    BMStreamDatastore *_inner;
}

- (id)newEnumeratorFromStartTime:(double)a0;
- (id)streamIdentifier;
- (void)dealloc;
- (id)newEnumeratorFromBookmark:(id)a0;
- (Class)eventClass;
- (id)initWithStream:(id)a0 config:(id)a1;
- (id)fetchEventsFrom:(double)a0 to:(double)a1;

@end

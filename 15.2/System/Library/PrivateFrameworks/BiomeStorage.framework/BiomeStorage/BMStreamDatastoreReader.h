@class BMStreamDatastore;

@interface BMStreamDatastoreReader : NSObject

@property (readonly, nonatomic) BMStreamDatastore *inner;
@property (readonly, nonatomic) BOOL canReadOrPruneData;

- (Class)eventBodyClass;
- (id)newEnumeratorFromBookmark:(id)a0;
- (id)newEnumeratorFromStartTime:(double)a0;
- (id)newEnumeratorFromStartTime:(double)a0 options:(unsigned long long)a1;
- (id)fetchEventsFrom:(double)a0 to:(double)a1 options:(unsigned long long)a2;
- (id)newEnumeratorFromBookmark:(id)a0 options:(unsigned long long)a1;
- (id)fetchEventsFrom:(double)a0 to:(double)a1;
- (id)streamIdentifier;
- (void).cxx_destruct;
- (id)newEnumeratorFromStartTime:(double)a0 endTime:(double)a1 maxEvents:(unsigned long long)a2 lastN:(unsigned long long)a3 options:(unsigned long long)a4;
- (id)newEnumeratorFromStartTime:(double)a0 endTime:(double)a1 maxEvents:(unsigned long long)a2 options:(unsigned long long)a3;
- (id)initWithStream:(id)a0 config:(id)a1;

@end

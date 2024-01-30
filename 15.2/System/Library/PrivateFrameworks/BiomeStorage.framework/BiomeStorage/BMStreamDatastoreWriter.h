@class BMStreamDatastore;

@interface BMStreamDatastoreWriter : NSObject {
    BMStreamDatastore *_inner;
}

@property (readonly, nonatomic) BOOL canReadOrPruneData;

- (Class)eventBodyClass;
- (void)syncMappedFiles;
- (BOOL)writeEventWithEventBody:(id)a0 timestamp:(double)a1;
- (BOOL)writeEventBodyClass:(Class)a0;
- (BOOL)writeEventWithEventBody:(id)a0;
- (id)streamIdentifier;
- (void).cxx_destruct;
- (id)initWithStream:(id)a0 config:(id)a1;
- (BOOL)_writeEventData:(id)a0 dataVersion:(unsigned int)a1 timestamp:(double)a2 outBookmark:(id *)a3;

@end

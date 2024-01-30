@class BMStreamDatastore;

@interface BMStreamDatastoreWriter : NSObject {
    BMStreamDatastore *_inner;
}

@property (readonly, nonatomic) BOOL canReadOrPruneData;

- (Class)eventBodyClass;
- (BOOL)writeEventWithEventBody:(id)a0 timestamp:(double)a1;
- (id)initWithStream:(id)a0 config:(id)a1;
- (void)syncMappedFiles;
- (BOOL)writeEventWithEventBody:(id)a0;
- (BOOL)writeEventBodyClass:(Class)a0;
- (id)streamIdentifier;
- (BOOL)_writeEventData:(id)a0 dataVersion:(unsigned int)a1 timestamp:(double)a2 outBookmark:(id *)a3;
- (void).cxx_destruct;

@end

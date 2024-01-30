@class BMStreamDatastore;

@interface BMStreamDatastoreWriter : NSObject {
    BMStreamDatastore *_inner;
}

- (id)streamIdentifier;
- (void)dealloc;
- (BOOL)writeEventWithEventBody:(id)a0 timestamp:(double)a1;
- (BOOL)writeEventWithEventBody:(id)a0;
- (void)syncMappedFiles;
- (id)initWithStream:(id)a0 config:(id)a1;

@end

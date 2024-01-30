@class NSData;

@interface SGPatternDataFile : NSObject {
    NSData *_fileData;
}

- (id)initWithPath:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)dataForOffset:(id)a0;
- (id)dataForOffset:(id)a0 includeTerminator:(int)a1;

@end

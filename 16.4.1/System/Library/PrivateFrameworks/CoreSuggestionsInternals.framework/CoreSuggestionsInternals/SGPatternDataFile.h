@class NSData;

@interface SGPatternDataFile : NSObject {
    NSData *_fileData;
}

- (id)initWithData:(id)a0;
- (id)initWithPath:(id)a0;
- (id)dataForOffset:(id)a0 includeTerminator:(int)a1;
- (id)dataForOffset:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end

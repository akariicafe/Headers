@class NSURL, NSFileHandle;

@interface DEFileReader : NSObject <DEReader>

@property (retain, nonatomic) NSURL *src;
@property (retain, nonatomic) NSFileHandle *file;

- (id)readDataOfLength:(unsigned long long)a0;
- (id)init;
- (void)close;
- (void).cxx_destruct;
- (id)readData;
- (void)dealloc;
- (id)initWithURL:(id)a0;

@end

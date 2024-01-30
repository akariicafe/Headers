@class NSURL, NSFileHandle;

@interface DEFileReader : NSObject <DEReader>

@property (retain, nonatomic) NSURL *src;
@property (retain, nonatomic) NSFileHandle *file;

- (id)initWithURL:(id)a0;
- (id)readData;
- (void)dealloc;
- (void)close;
- (id)init;
- (id)readDataOfLength:(unsigned long long)a0;
- (void).cxx_destruct;

@end

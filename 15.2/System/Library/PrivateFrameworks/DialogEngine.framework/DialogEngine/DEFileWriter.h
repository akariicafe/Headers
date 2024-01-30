@class NSURL, NSFileHandle;

@interface DEFileWriter : NSObject <DEWriter>

@property (retain, nonatomic) NSURL *dest;
@property (retain, nonatomic) NSFileHandle *file;

- (void)writeData:(id)a0;
- (void)close;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

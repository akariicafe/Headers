@class NSURL, NSFileHandle;

@interface DEFileWriter : NSObject <DEWriter>

@property (retain, nonatomic) NSURL *dest;
@property (retain, nonatomic) NSFileHandle *file;

- (id)init;
- (void)close;
- (void).cxx_destruct;
- (void)dealloc;
- (void)writeData:(id)a0;
- (id)initWithURL:(id)a0;

@end

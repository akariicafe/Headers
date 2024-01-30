@class NSURL, NSFileHandle;

@interface DEFileWriter : NSObject <DEWriter>

@property (retain, nonatomic) NSURL *dest;
@property (retain, nonatomic) NSFileHandle *file;

- (void)writeData:(id)a0;
- (id)initWithURL:(id)a0;
- (void)dealloc;
- (void)close;
- (id)init;
- (void).cxx_destruct;

@end

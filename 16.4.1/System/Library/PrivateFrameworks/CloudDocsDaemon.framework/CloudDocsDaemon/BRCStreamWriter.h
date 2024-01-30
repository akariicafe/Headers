@class NSOutputStream;

@interface BRCStreamWriter : NSObject {
    NSOutputStream *_outputStream;
}

- (void)appendString:(id)a0;
- (id)initWithOutputStream:(id)a0;
- (void)dealloc;
- (void)close;
- (void).cxx_destruct;

@end

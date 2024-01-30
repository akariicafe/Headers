@class NSOutputStream;

@interface PBMessageStreamWriter : NSObject {
    NSOutputStream *_stream;
}

- (void)dealloc;
- (id)initWithOutputStream:(id)a0;
- (BOOL)writeMessage:(id)a0;

@end

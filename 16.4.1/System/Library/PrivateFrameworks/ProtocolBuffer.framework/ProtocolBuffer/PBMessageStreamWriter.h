@class NSOutputStream;

@interface PBMessageStreamWriter : NSObject {
    NSOutputStream *_stream;
}

- (id)initWithOutputStream:(id)a0;
- (void).cxx_destruct;
- (BOOL)writeMessage:(id)a0;

@end

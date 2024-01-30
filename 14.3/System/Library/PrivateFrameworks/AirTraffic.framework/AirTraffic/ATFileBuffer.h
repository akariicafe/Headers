@class NSFileHandle;

@interface ATFileBuffer : NSObject {
    NSFileHandle *_bufferFileHandle;
    unsigned long long _currentReadLocation;
    unsigned long long _length;
}

- (id)readDataOfLength:(unsigned long long)a0;
- (unsigned long long)length;
- (id)init;
- (void).cxx_destruct;
- (void)rewind:(unsigned long long)a0;
- (void)rewindData:(id)a0;
- (void)appendData:(id)a0;

@end

@class NSString, NSOutputStream;

@interface BRKAccelerationFileWriter : BRKWriter <BRKAccelerationWriter> {
    NSOutputStream *_outputStream;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)close;
- (void).cxx_destruct;
- (void)_lock_close;
- (void)openWithDataCount:(unsigned long long)a0;
- (void)_lock_writeX:(double)a0 y:(double)a1 z:(double)a2 timestamp:(double)a3;
- (void)_lock_openWithDataCount:(unsigned long long)a0;
- (void)writeX:(double)a0 y:(double)a1 z:(double)a2 timestamp:(double)a3;

@end

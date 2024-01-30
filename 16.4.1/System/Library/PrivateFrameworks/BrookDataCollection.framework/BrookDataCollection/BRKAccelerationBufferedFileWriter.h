@class NSString, NSMutableArray;

@interface BRKAccelerationBufferedFileWriter : BRKWriter <BRKAccelerationWriter> {
    NSMutableArray *_values;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)close;
- (void).cxx_destruct;
- (void)_lock_close;
- (void)_lock_writeX:(double)a0 y:(double)a1 z:(double)a2 timestamp:(double)a3;
- (void)writeX:(double)a0 y:(double)a1 z:(double)a2 timestamp:(double)a3;

@end

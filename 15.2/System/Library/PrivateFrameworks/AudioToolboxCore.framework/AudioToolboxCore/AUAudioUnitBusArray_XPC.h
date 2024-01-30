@interface AUAudioUnitBusArray_XPC : AUAudioUnitBusArray {
    BOOL _countWritable;
}

- (BOOL)isCountChangeable;
- (BOOL)setBusCount:(unsigned long long)a0 error:(id *)a1;
- (id)initWithOwner:(id)a0 scope:(unsigned int)a1 busses:(id)a2 countWritable:(BOOL)a3;

@end

@interface AUV2BridgeBusArray : AUAudioUnitBusArray

- (BOOL)isCountChangeable;
- (BOOL)setBusCount:(unsigned long long)a0 error:(id *)a1;
- (id)initWithOwner:(id)a0 scope:(unsigned int)a1;

@end

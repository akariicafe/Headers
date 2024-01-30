@interface _AFAudioPowerXPCSharedMemory : NSObject {
    unsigned long long _mappedLength;
    void *_sharedRegion;
}

@property (readonly, nonatomic) float averagePower;
@property (readonly, nonatomic) float peakPower;

- (id)initWithXPCObject:(id)a0;
- (void)_destroyMapping;
- (void)dealloc;

@end

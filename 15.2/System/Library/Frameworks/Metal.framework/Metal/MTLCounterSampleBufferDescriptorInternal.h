@class NSString;
@protocol MTLCounterSet;

@interface MTLCounterSampleBufferDescriptorInternal : MTLCounterSampleBufferDescriptor <NSCopying> {
    id<MTLCounterSet> _counterSet;
    unsigned long long _storageMode;
    NSString *_label;
    unsigned long long _sampleCount;
}

- (void)setSampleCount:(unsigned long long)a0;
- (void)setStorageMode:(unsigned long long)a0;
- (id)label;
- (unsigned long long)storageMode;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)sampleCount;
- (unsigned long long)hash;
- (void)dealloc;
- (void)setLabel:(id)a0;
- (id)counterSet;
- (void)setCounterSet:(id)a0;

@end

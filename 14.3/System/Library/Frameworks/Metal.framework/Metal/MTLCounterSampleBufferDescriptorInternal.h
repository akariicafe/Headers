@class NSString;
@protocol MTLCounterSet;

@interface MTLCounterSampleBufferDescriptorInternal : MTLCounterSampleBufferDescriptor <NSCopying> {
    id<MTLCounterSet> _counterSet;
    unsigned long long _storageMode;
    NSString *_label;
    unsigned long long _sampleCount;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)setLabel:(id)a0;
- (unsigned long long)hash;
- (void)setSampleCount:(unsigned long long)a0;
- (void)setStorageMode:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)sampleCount;
- (id)label;
- (id)counterSet;
- (void)setCounterSet:(id)a0;
- (unsigned long long)storageMode;

@end

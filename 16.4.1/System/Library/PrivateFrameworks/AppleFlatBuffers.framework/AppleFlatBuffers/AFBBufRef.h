@class NSData;

@interface AFBBufRef : NSObject {
    NSData *_data;
    struct __CFAllocator { } *_cfReleaseBackingDataDeallocator;
}

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) const struct __CFAllocator { } *deallocator;

- (id)initWithData:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)releaseBuf;
- (void)retainBuf;

@end

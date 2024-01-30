@interface NFCISO15693ReadMultipleBlocksConfiguration : NFCTagCommandConfiguration

@property (nonatomic) unsigned char flags;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (nonatomic) unsigned long long chunkSize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)asNSDataArrayWithUID:(id)a0 error:(id *)a1;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 chunkSize:(unsigned long long)a1;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 chunkSize:(unsigned long long)a1 maximumRetries:(unsigned long long)a2 retryInterval:(double)a3;

@end

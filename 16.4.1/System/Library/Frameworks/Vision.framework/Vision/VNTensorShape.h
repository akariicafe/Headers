@interface VNTensorShape : NSObject <NSCopying, NSSecureCoding> {
    struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *__value_; } __end_cap_; } _sizes;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long rank;
@property (readonly, nonatomic) const unsigned long long *sizes;
@property (readonly, nonatomic) unsigned long long elementCount;

- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithBatchNumber:(unsigned long long)a0 channels:(unsigned long long)a1 width:(unsigned long long)a2 height:(unsigned long long)a3;
- (id)initWithImageChannels:(unsigned long long)a0 width:(unsigned long long)a1 height:(unsigned long long)a2;
- (id)initWithPixelFormatType:(unsigned int)a0 width:(unsigned long long)a1 height:(unsigned long long)a2;
- (id)initWithSizes:(const unsigned long long *)a0 count:(unsigned long long)a1;

@end

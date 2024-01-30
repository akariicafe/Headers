@class NSData;

@interface NRMiniUUIDSet : NSObject <NSCopying, NSSecureCoding> {
    struct vector<unsigned int, std::allocator<unsigned int> > { unsigned int *__begin_; unsigned int *__end_; struct __compressed_pair<unsigned int *, std::allocator<unsigned int> > { unsigned int *__value_; } __end_cap_; } _miniUUIDs;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *data;

- (id)initWithData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)hasUUID:(id)a0;
- (id)initWithUUIDSet:(id)a0;

@end

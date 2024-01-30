@interface _ACComponentVector : NSObject <NSSecureCoding> {
    struct AudioComponentVector { void *__begin_; void *__end_; struct __compressed_pair<std::shared_ptr<APComponent> *, std::allocator<std::shared_ptr<APComponent>>> { void *__value_; } __end_cap_; BOOL mSorted; } mVector;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithVector:(const void *)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;

@end

@interface _HDCachedSourceOrder : NSObject {
    BOOL _userOrdered;
    BOOL _isDefaultSourceOrder;
    struct vector<_HDWrappedSource, std::allocator<_HDWrappedSource>> { struct _HDWrappedSource *__begin_; struct _HDWrappedSource *__end_; struct __compressed_pair<_HDWrappedSource *, std::allocator<_HDWrappedSource>> { struct _HDWrappedSource *__value_; } __end_cap_; } _orderedSources;
}

- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end

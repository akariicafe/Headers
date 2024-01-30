@interface RETransformerInvocation : NSObject {
    struct vector<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { unsigned long long *__value_; } __end_cap_; } _values;
}

@property (readonly, nonatomic) unsigned long long numberOfArguments;

+ (id)invocationWithArguments:(unsigned long long *)a0 count:(unsigned long long)a1;

- (void)setArgument:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (unsigned long long)getArgumentAtIndex:(unsigned long long)a0;

@end

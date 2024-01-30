@class NSURL;

@interface _LSAvailableApplicationsForURLQuery : _LSQuery

@property (readonly, copy, nonatomic) NSURL *URL;

+ (BOOL)supportsSecureCoding;

- (BOOL)_requiresDatabaseMappingEntitlement;
- (void)yieldBundles:(const struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *x0; unsigned int *x1; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *x0; } x2; } *)a0 context:(struct LSContext { id x0; } *)a1 block:(id /* block */)a2;
- (void).cxx_destruct;
- (void)_enumerateWithXPCConnection:(id)a0 block:(id /* block */)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

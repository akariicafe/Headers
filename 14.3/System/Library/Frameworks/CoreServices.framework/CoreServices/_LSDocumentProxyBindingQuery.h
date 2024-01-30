@class LSDocumentProxy, NSString;

@interface _LSDocumentProxyBindingQuery : _LSQuery

@property (nonatomic) BOOL yieldClaimBindings;
@property (readonly, retain, nonatomic) LSDocumentProxy *documentProxy;
@property (readonly, nonatomic) unsigned char style;
@property (readonly, copy, nonatomic) NSString *handlerRank;

+ (BOOL)supportsSecureCoding;

- (void)filterOpenRestrictedBindings:(struct vector<LSBinding, std::__1::allocator<LSBinding> > { struct LSBinding *x0; struct LSBinding *x1; struct __compressed_pair<LSBinding *, std::__1::allocator<LSBinding> > { struct LSBinding *x0; } x2; } *)a0 connection:(id)a1 context:(struct LSContext { id x0; } *)a2 earlyYield:(id /* block */)a3;
- (id)initWithDocumentProxy:(id)a0 style:(unsigned char)a1 handlerRank:(id)a2;
- (BOOL)_requiresDatabaseMappingEntitlement;
- (void).cxx_destruct;
- (void)_enumerateWithXPCConnection:(id)a0 block:(id /* block */)a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

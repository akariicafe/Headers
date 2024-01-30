@class LSDocumentProxy, NSString;

@interface _LSDocumentProxyBindingQuery : _LSQuery

@property (nonatomic) BOOL yieldClaimBindings;
@property (readonly, retain, nonatomic) LSDocumentProxy *documentProxy;
@property (readonly, nonatomic) unsigned char style;
@property (readonly, copy, nonatomic) NSString *handlerRank;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_requiresDatabaseMappingEntitlement;
- (void)_enumerateWithXPCConnection:(id)a0 block:(id /* block */)a1;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (void)filterOpenRestrictedBindings:(void *)a0 connection:(id)a1 context:(struct LSContext { id x0; } *)a2 earlyYield:(id /* block */)a3;
- (id)initWithDocumentProxy:(id)a0 style:(unsigned char)a1 handlerRank:(id)a2;

@end

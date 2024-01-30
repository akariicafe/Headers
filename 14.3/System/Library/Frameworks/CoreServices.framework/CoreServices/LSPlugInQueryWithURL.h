@class NSURL;

@interface LSPlugInQueryWithURL : LSPlugInQuery {
    NSURL *_bundleURL;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_bundleURL;
- (id)_initWithURL:(id)a0;
- (void)_enumerateWithXPCConnection:(id)a0 block:(id /* block */)a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

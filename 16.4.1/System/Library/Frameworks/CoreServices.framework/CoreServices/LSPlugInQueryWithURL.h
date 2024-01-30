@class NSURL;

@interface LSPlugInQueryWithURL : LSPlugInQuery {
    NSURL *_bundleURL;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_enumerateWithXPCConnection:(id)a0 block:(id /* block */)a1;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)_initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)_bundleURL;

@end

@class NSString;

@interface LSPlugInQueryWithIdentifier : LSPlugInQuery {
    int _bindingMap;
    NSString *_identifier;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_identifier;
- (void)_enumerateWithXPCConnection:(id)a0 block:(id /* block */)a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)_initWithIdentifier:(id)a0 inMap:(int)a1;
- (BOOL)isEqual:(id)a0;
- (BOOL)isBindingMapValid;
- (void)encodeWithCoder:(id)a0;

@end

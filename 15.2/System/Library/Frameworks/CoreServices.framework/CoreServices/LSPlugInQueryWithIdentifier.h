@class NSString;

@interface LSPlugInQueryWithIdentifier : LSPlugInQuery {
    int _bindingMap;
    NSString *_identifier;
}

+ (BOOL)supportsSecureCoding;

- (void)_enumerateWithXPCConnection:(id)a0 block:(id /* block */)a1;
- (BOOL)isBindingMapValid;
- (id)_initWithIdentifier:(id)a0 inMap:(int)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_identifier;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;

@end

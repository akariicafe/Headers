@class NSString;

@interface LSPlugInQueryWithIdentifier : LSPlugInQuery {
    int _bindingMap;
    NSString *_identifier;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_enumerateWithXPCConnection:(id)a0 block:(id /* block */)a1;
- (id)_identifier;
- (BOOL)isBindingMapValid;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)_initWithIdentifier:(id)a0 inMap:(int)a1;
- (void).cxx_destruct;

@end

@class Protocol;

@interface _REInterfaceKey : NSObject <NSCopying> {
    Class _c;
    Protocol *_p;
    BOOL _isClass;
}

@property (retain, nonatomic) Class cls;
@property (retain, nonatomic) Protocol *protocol;
@property (readonly, nonatomic) BOOL isProtocol;
@property (readonly, nonatomic) _REInterfaceKey *superclassKey;

- (void)enumerateConformedProperties:(id /* block */)a0;
- (id)initWithProtocol:(id)a0;
- (id)initWithClass:(Class)a0;
- (void)enumerateExposedMethods:(id /* block */)a0;
- (void)enumerateExposedProperties:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)enumerateAutomaticProperties:(id /* block */)a0;
- (BOOL)conforms:(id)a0;

@end

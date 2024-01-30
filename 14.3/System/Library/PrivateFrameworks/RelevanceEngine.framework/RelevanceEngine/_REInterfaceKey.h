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

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithProtocol:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithClass:(Class)a0;
- (void)enumerateAutomaticProperties:(id /* block */)a0;
- (void)enumerateConformedProperties:(id /* block */)a0;
- (void)enumerateExposedProperties:(id /* block */)a0;
- (void)enumerateExposedMethods:(id /* block */)a0;
- (BOOL)conforms:(id)a0;

@end

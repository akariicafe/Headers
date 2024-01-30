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

- (id)initWithProtocol:(id)a0;
- (id)initWithClass:(Class)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)conforms:(id)a0;
- (void)enumerateAutomaticProperties:(id /* block */)a0;
- (void)enumerateConformedProperties:(id /* block */)a0;
- (void)enumerateExposedMethods:(id /* block */)a0;
- (void)enumerateExposedProperties:(id /* block */)a0;

@end

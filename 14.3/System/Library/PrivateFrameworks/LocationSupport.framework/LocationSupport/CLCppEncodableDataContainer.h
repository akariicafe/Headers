@class NSData;

@interface CLCppEncodableDataContainer : CLCppContainer

@property (copy, nonatomic) NSData *serialized;
@property (copy, nonatomic) id compatibilityInfo;
@property (copy, nonatomic) id /* block */ encoder;

+ (BOOL)supportsSecureCoding;
+ (id)containerWithObject:(void *)a0 cppDataEncoder:(id /* block */)a1 destructor:(id /* block */)a2 binaryVersion:(unsigned long long)a3 typeSize:(unsigned long long)a4;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)initWithObject:(void *)a0 cppDataEncoder:(id /* block */)a1 destructor:(id /* block */)a2 binaryVersion:(unsigned long long)a3 typeSize:(unsigned long long)a4;
- (void)encodeWithCoder:(id)a0;

@end

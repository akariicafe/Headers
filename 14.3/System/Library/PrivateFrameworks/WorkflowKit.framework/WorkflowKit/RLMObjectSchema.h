@class NSString, NSDictionary, NSArray, RLMProperty;

@interface RLMObjectSchema : NSObject <NSCopying> {
    NSArray *_swiftGenericProperties;
}

@property (retain, nonatomic) NSDictionary *allPropertiesByName;
@property (retain, nonatomic) NSString *className;
@property (readonly, nonatomic) NSString *objectName;
@property (copy, nonatomic) NSArray *properties;
@property (nonatomic) BOOL isSwiftClass;
@property (nonatomic) Class objectClass;
@property (nonatomic) Class accessorClass;
@property (nonatomic) Class unmanagedClass;
@property (retain, nonatomic) RLMProperty *primaryKeyProperty;
@property (copy, nonatomic) NSArray *computedProperties;
@property (readonly, nonatomic) NSArray *swiftGenericProperties;

+ (id)propertiesForClass:(Class)a0 isSwift:(BOOL)a1;
+ (id)objectSchemaForObjectStoreSchema:(const struct ObjectSchema { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x0; struct vector<realm::Property, std::__1::allocator<realm::Property> > { struct Property *x0; struct Property *x1; struct __compressed_pair<realm::Property *, std::__1::allocator<realm::Property> > { struct Property *x0; } x2; } x1; struct vector<realm::Property, std::__1::allocator<realm::Property> > { struct Property *x0; struct Property *x1; struct __compressed_pair<realm::Property *, std::__1::allocator<realm::Property> > { struct Property *x0; } x2; } x2; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x3; } *)a0;
+ (void)addSwiftProperties:(id)a0 objectUtil:(Class)a1 instance:(id)a2 indexed:(id)a3 nameMap:(id)a4;
+ (id)schemaForObjectClass:(Class)a0;

- (struct ObjectSchema { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x0; struct vector<realm::Property, std::__1::allocator<realm::Property> > { struct Property *x0; struct Property *x1; struct __compressed_pair<realm::Property *, std::__1::allocator<realm::Property> > { struct Property *x0; } x2; } x1; struct vector<realm::Property, std::__1::allocator<realm::Property> > { struct Property *x0; struct Property *x1; struct __compressed_pair<realm::Property *, std::__1::allocator<realm::Property> > { struct Property *x0; } x2; } x2; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x3; })objectStoreCopy:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithClassName:(id)a0 objectClass:(Class)a1 properties:(id)a2;
- (void)_propertiesDidChange;
- (id)description;
- (id)objectForKeyedSubscript:(id)a0;
- (BOOL)isEqualToObjectSchema:(id)a0;

@end

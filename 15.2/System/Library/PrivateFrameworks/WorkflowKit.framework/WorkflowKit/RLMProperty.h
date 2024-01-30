@class NSString;

@interface RLMProperty : NSObject

@property (retain, nonatomic) NSString *name;
@property (nonatomic) int type;
@property (nonatomic) BOOL indexed;
@property (nonatomic) BOOL optional;
@property (copy, nonatomic) NSString *objectClassName;
@property (retain, nonatomic) NSString *columnName;
@property (nonatomic) unsigned long long index;
@property (nonatomic) BOOL isPrimary;
@property (nonatomic) struct objc_ivar { } *swiftIvar;
@property (copy, nonatomic) NSString *getterName;
@property (copy, nonatomic) NSString *setterName;
@property (nonatomic) SEL getterSel;
@property (nonatomic) SEL setterSel;
@property (readonly, copy, nonatomic) NSString *linkOriginPropertyName;
@property (readonly, nonatomic) BOOL array;

+ (id)propertyForObjectStoreProperty:(const void *)a0;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initSwiftPropertyWithName:(id)a0 indexed:(BOOL)a1 linkPropertyDescriptor:(id)a2 property:(struct objc_property { } *)a3 instance:(id)a4;
- (id)initWithName:(id)a0 indexed:(BOOL)a1 linkPropertyDescriptor:(id)a2 property:(struct objc_property { } *)a3;
- (id)initSwiftListPropertyWithName:(id)a0 instance:(id)a1;
- (id)initSwiftLinkingObjectsPropertyWithName:(id)a0 ivar:(struct objc_ivar { } *)a1 objectClassName:(id)a2 linkOriginPropertyName:(id)a3;
- (id)initSwiftOptionalPropertyWithName:(id)a0 indexed:(BOOL)a1 ivar:(struct objc_ivar { } *)a2 propertyType:(int)a3;
- (struct Property { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x0; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned char x2; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x3; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x4; struct TaggedBool<realm::IsPrimaryTag> { BOOL x0; } x5; struct TaggedBool<realm::IsIndexedTag> { BOOL x0; } x6; unsigned long long x7; })objectStoreCopy:(id)a0;
- (id)initWithName:(id)a0 type:(int)a1 objectClassName:(id)a2 linkOriginPropertyName:(id)a3 indexed:(BOOL)a4 optional:(BOOL)a5;
- (void)updateAccessors;
- (void)parseObjcProperty:(struct objc_property { } *)a0 readOnly:(BOOL *)a1 computed:(BOOL *)a2 rawType:(id *)a3;
- (BOOL)setTypeFromRawType:(id)a0;
- (BOOL)isEqualToProperty:(id)a0;
- (id)copyWithNewName:(id)a0;

@end

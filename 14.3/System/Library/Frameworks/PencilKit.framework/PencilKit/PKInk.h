@class PKInkBehavior, NSString, UIColor;

@interface PKInk : NSObject <NSCopying> {
    struct shared_ptr<PKProtobufUnknownFields> { struct PKProtobufUnknownFields *__ptr_; struct __shared_weak_count *__cntrl_; } _unknownFields;
}

@property (retain, nonatomic) PKInkBehavior *behavior;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) NSString *variant;
@property (readonly, nonatomic) double _weight;
@property (readonly, nonatomic) BOOL _isStrokeGeneratingInk;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) double weight;
@property (readonly, nonatomic) NSString *inkType;
@property (readonly, nonatomic) UIColor *color;

+ (id)inkWithIdentifier:(id)a0 color:(id)a1 weight:(double)a2;
+ (double)defaultWeightForIdentifier:(id)a0;
+ (id)inkWithType:(id)a0 color:(id)a1 weight:(double)a2;
+ (double)defaultOpacityForIdentifier:(id)a0;
+ (id)inkWithIdentifier:(id)a0 properties:(id)a1;
+ (id)identifierForInkType:(id)a0;
+ (id)inkWithIdentifier:(id)a0 color:(id)a1;
+ (id)inkWithIdentifier:(id)a0 color:(id)a1 version:(unsigned long long)a2 variant:(id)a3;
+ (id)inkWithIdentifier:(id)a0 color:(id)a1 variant:(id)a2;
+ (id)inkFromDictionary:(id)a0 color:(id)a1 identifier:(id)a2;
+ (id)inkFromInk:(id)a0 color:(id)a1;
+ (id)inkFromInk:(id)a0 withBehavior:(id)a1;
+ (id)colorForLassoStroke;
+ (id)identifierForCommandType:(unsigned int)a0 wantsObjectErase:(BOOL)a1;

- (id)init;
- (void)setWeight:(double)a0;
- (id)properties;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithArchive:(const struct Ink { void /* function */ **x0; struct unique_ptr<drawing::Color, std::__1::default_delete<drawing::Color> > { struct __compressed_pair<drawing::Color *, std::__1::default_delete<drawing::Color> > { struct Color *x0; } x0; } x1; struct unique_ptr<std::__1::basic_string<char>, std::__1::default_delete<std::__1::basic_string<char> > > { struct __compressed_pair<std::__1::basic_string<char> *, std::__1::default_delete<std::__1::basic_string<char> > > { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x0; } x2; struct unique_ptr<std::__1::basic_string<char>, std::__1::default_delete<std::__1::basic_string<char> > > { struct __compressed_pair<std::__1::basic_string<char> *, std::__1::default_delete<std::__1::basic_string<char> > > { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x0; } x3; unsigned long long x4; struct { unsigned char x0 : 1; } x5; struct shared_ptr<PKProtobufUnknownFields> { struct PKProtobufUnknownFields *x0; struct __shared_weak_count *x1; } x6; } *)a0;
- (unsigned long long)hash;
- (id)description;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (void)saveToArchive:(struct Ink { void /* function */ **x0; struct unique_ptr<drawing::Color, std::__1::default_delete<drawing::Color> > { struct __compressed_pair<drawing::Color *, std::__1::default_delete<drawing::Color> > { struct Color *x0; } x0; } x1; struct unique_ptr<std::__1::basic_string<char>, std::__1::default_delete<std::__1::basic_string<char> > > { struct __compressed_pair<std::__1::basic_string<char> *, std::__1::default_delete<std::__1::basic_string<char> > > { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x0; } x2; struct unique_ptr<std::__1::basic_string<char>, std::__1::default_delete<std::__1::basic_string<char> > > { struct __compressed_pair<std::__1::basic_string<char> *, std::__1::default_delete<std::__1::basic_string<char> > > { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x0; } x3; unsigned long long x4; struct { unsigned char x0 : 1; } x5; struct shared_ptr<PKProtobufUnknownFields> { struct PKProtobufUnknownFields *x0; struct __shared_weak_count *x1; } x6; } *)a0;
- (BOOL)_isHandwritingInk;
- (BOOL)_isLassoInk;
- (BOOL)_isEraserInk;
- (id)initWithInkType:(id)a0 color:(id)a1;
- (id)initWithIdentifier:(id)a0 color:(id)a1 version:(unsigned long long)a2 variant:(id)a3;
- (id)initWithV1Archive:(const struct Ink { void /* function */ **x0; struct unique_ptr<drawingV1::Color, std::__1::default_delete<drawingV1::Color> > { struct __compressed_pair<drawingV1::Color *, std::__1::default_delete<drawingV1::Color> > { struct Color *x0; } x0; } x1; struct unique_ptr<std::__1::basic_string<char>, std::__1::default_delete<std::__1::basic_string<char> > > { struct __compressed_pair<std::__1::basic_string<char> *, std::__1::default_delete<std::__1::basic_string<char> > > { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x0; } x2; unsigned long long x3; struct { unsigned char x0 : 1; } x4; } *)a0 serializationVersion:(unsigned long long)a1;
- (void)saveToV1Archive:(struct Ink { void /* function */ **x0; struct unique_ptr<drawingV1::Color, std::__1::default_delete<drawingV1::Color> > { struct __compressed_pair<drawingV1::Color *, std::__1::default_delete<drawingV1::Color> > { struct Color *x0; } x0; } x1; struct unique_ptr<std::__1::basic_string<char>, std::__1::default_delete<std::__1::basic_string<char> > > { struct __compressed_pair<std::__1::basic_string<char> *, std::__1::default_delete<std::__1::basic_string<char> > > { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x0; } x2; unsigned long long x3; struct { unsigned char x0 : 1; } x4; } *)a0;
- (void)_addTestDataToUnknownFields;
- (id)_dataInUnknownFields;
- (id)initWithIdentifier:(id)a0 color:(id)a1 version:(unsigned long long)a2 variant:(id)a3 weight:(double)a4;
- (id)initWithIdentifier:(id)a0 color:(id)a1 version:(unsigned long long)a2 variant:(id)a3 behavior:(id)a4;
- (BOOL)isEqualInk:(id)a0;
- (unsigned long long)hashValueForFloat:(double)a0;

@end

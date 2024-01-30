@class NSString, NSMutableString, _PLDescriptionStyle, NSObject;

@interface PLDescriptionBuilder : NSObject {
    NSObject *_object;
    NSMutableString *_description;
    long long _indent;
    NSString *_indentString;
    _PLDescriptionStyle *_style;
    long long _descriptionStyle;
}

@property (copy, nonatomic) NSString *separator;
@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) long long indent;

+ (id)prettyMultiLineDescriptionBuilderWithObject:(id)a0 indent:(long long)a1;
+ (id)descriptionBuilderWithObject:(id)a0;
+ (id)plainDescriptionBuilder;
+ (id)plainMultiLineDescriptionBuilder;

- (void)appendName:(id)a0 boolValue:(BOOL)a1;
- (id)initWithObject:(id)a0 style:(long long)a1 indent:(long long)a2;
- (void)appendName:(id)a0 typeCode:(const char *)a1 value:(const void *)a2;
- (void)appendName:(id)a0 unsignedIntegerValue:(unsigned long long)a1;
- (id)build;
- (void).cxx_destruct;
- (void)appendName:(id)a0 object:(id)a1;
- (void)appendName:(id)a0 integerValue:(long long)a1;
- (void)appendName:(id)a0 floatValue:(float)a1;
- (void)appendName:(id)a0 cgSize:(struct CGSize { double x0; double x1; })a1;
- (void)appendName:(id)a0 doubleValue:(double)a1;

@end

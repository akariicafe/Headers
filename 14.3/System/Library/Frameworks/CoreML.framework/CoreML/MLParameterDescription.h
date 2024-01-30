@class MLNumericConstraint, MLParameterKey;

@interface MLParameterDescription : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) MLParameterKey *key;
@property (retain, nonatomic) id defaultValue;
@property (retain, nonatomic) MLNumericConstraint *numericConstraint;

+ (id)parameterDescriptionForKey:(id)a0 int64ParameterSpec:(const struct Int64Parameter { void /* function */ **x0; struct InternalMetadataWithArenaLite { void *x0; } x1; long long x2; union AllowedValuesUnion { struct Int64Range *x0; struct Int64Set *x1; } x3; int x4; unsigned int x5[1]; } *)a1;
+ (id)parameterDescriptionForKey:(id)a0 doubleParameterSpec:(const struct DoubleParameter { void /* function */ **x0; struct InternalMetadataWithArenaLite { void *x0; } x1; double x2; union AllowedValuesUnion { struct DoubleRange *x0; } x3; int x4; unsigned int x5[1]; } *)a1;
+ (id)parameterDescriptionForKey:(id)a0 stringParameterSpec:(const struct StringParameter { void /* function */ **x0; struct InternalMetadataWithArenaLite { void *x0; } x1; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x2; int x3; } *)a1;
+ (id)parameterDescriptionForKey:(id)a0 boolParameterSpec:(const struct BoolParameter { void /* function */ **x0; struct InternalMetadataWithArenaLite { void *x0; } x1; BOOL x2; int x3; } *)a1;
+ (id)parameterDescriptionForKey:(id)a0 defaultValue:(id)a1 numericConstraint:(id)a2;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end

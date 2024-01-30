@class NSString, MTLFunctionConstantValues;

@interface MTLFunctionDescriptor : NSObject <NSCopying> {
    struct MTLFunctionDescriptorPrivate { NSString *name; NSString *specializedName; unsigned long long options; MTLFunctionConstantValues *constantValues; } _private;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *specializedName;
@property (copy, nonatomic) MTLFunctionConstantValues *constantValues;
@property (nonatomic) unsigned long long options;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;
+ (id)functionDescriptor;

- (id)formattedDescription:(unsigned long long)a0;
- (void)setName:(id)a0;
- (void)setOptions:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)constantValues;
- (id)specializedName;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)name;
- (void)setSpecializedName:(id)a0;
- (void)setConstantValues:(id)a0;
- (unsigned long long)options;

@end

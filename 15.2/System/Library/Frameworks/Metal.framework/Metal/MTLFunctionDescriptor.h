@class NSString, NSArray, MTLFunctionConstantValues, NSDictionary;

@interface MTLFunctionDescriptor : NSObject <NSCopying> {
    struct MTLFunctionDescriptorPrivate { NSString *name; NSString *specializedName; unsigned long long options; MTLFunctionConstantValues *constantValues; NSArray *binaryArchives; BOOL applyFunctionConstants; } _private;
    unsigned long long _pipelineOptions;
    NSDictionary *_pluginData;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *specializedName;
@property (copy, nonatomic) MTLFunctionConstantValues *constantValues;
@property (nonatomic) unsigned long long options;
@property (copy, nonatomic) NSArray *binaryArchives;

+ (id)alloc;
+ (id)functionDescriptor;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)setPluginData:(id)a0;
- (id)pluginData;
- (unsigned long long)pipelineOptions;
- (id)specializedName;
- (void)setPipelineOptions:(unsigned long long)a0;
- (void)setName:(id)a0;
- (struct { unsigned char x0[32]; })hashStableWithFunction:(id)a0;
- (id)description;
- (void)setSpecializedName:(id)a0;
- (unsigned long long)options;
- (void)setConstantValues:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)setApplyFunctionConstants:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)formattedDescription:(unsigned long long)a0;
- (id)name;
- (unsigned long long)hash;
- (void)dealloc;
- (id)constantValues;
- (void)setOptions:(unsigned long long)a0;
- (BOOL)applyFunctionConstants;

@end

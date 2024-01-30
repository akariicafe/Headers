@class NSString, NSArray, MTLFunctionConstantValues, NSDictionary;

@interface MTLFunctionDescriptor : NSObject <NSCopying> {
    struct MTLFunctionDescriptorPrivate { NSString *name; NSString *specializedName; unsigned long long options; MTLFunctionConstantValues *constantValues; NSArray *binaryArchives; BOOL applyFunctionConstants; NSArray *privateFunctions; } _private;
    unsigned long long _pipelineOptions;
    NSDictionary *_pluginData;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *specializedName;
@property (copy, nonatomic) MTLFunctionConstantValues *constantValues;
@property (nonatomic) unsigned long long options;
@property (copy, nonatomic) NSArray *binaryArchives;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)functionDescriptor;

- (void)setPipelineOptions:(unsigned long long)a0;
- (unsigned long long)pipelineOptions;
- (unsigned long long)options;
- (id)pluginData;
- (void)setPluginData:(id)a0;
- (void)setSpecializedName:(id)a0;
- (struct { unsigned char x0[32]; })hashStableWithFunction:(id)a0;
- (void)setConstantValues:(id)a0;
- (id)constantValues;
- (void)setPrivateFunctions:(id)a0;
- (BOOL)applyFunctionConstants;
- (id)specializedName;
- (id)formattedDescription:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void)setApplyFunctionConstants:(BOOL)a0;
- (void)setName:(id)a0;
- (void)setOptions:(unsigned long long)a0;
- (id)privateFunctions;
- (id)description;
- (id)name;

@end

@class NSDictionary, NSString;

@interface BWPointCloudFormat : BWFormat <BWDataBufferBackedFormat>

@property (readonly, nonatomic) unsigned long long maxPoints;
@property (readonly, nonatomic) unsigned long long dataBufferSize;
@property (readonly, nonatomic) unsigned int dataFormat;
@property (readonly, nonatomic) NSDictionary *dataBufferAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)formatByResolvingRequirements:(id)a0 printErrors:(BOOL)a1;
+ (id)formatByResolvingRequirements:(id)a0;
+ (id)_formatRequirementsByResolvingFormatRequirements:(id)a0 withFormatRequirements:(id)a1;

- (unsigned int)mediaType;
- (struct opaqueCMFormatDescription { } *)formatDescription;
- (void)dealloc;
- (id)_initWithResolvedFormatRequirements:(id)a0;

@end

@class NSArray, NSDictionary;

@interface BWPointCloudFormatRequirements : BWFormatRequirements

@property (copy, nonatomic) NSArray *supportedDataFormats;
@property (nonatomic) unsigned long long maxPoints;
@property (nonatomic) unsigned long long dataBufferSize;
@property (readonly, nonatomic) NSDictionary *dataBufferAttributes;
@property (nonatomic) BOOL memoryPoolUseAllowed;

- (unsigned int)mediaType;
- (id)init;
- (void)dealloc;
- (Class)formatClass;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end

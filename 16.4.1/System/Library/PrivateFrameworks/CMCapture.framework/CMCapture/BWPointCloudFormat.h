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
+ (id)formatByResolvingRequirements:(id)a0;
+ (id)formatByResolvingRequirements:(id)a0 printErrors:(BOOL)a1;

- (struct opaqueCMFormatDescription { } *)formatDescription;
- (unsigned int)mediaType;
- (void)dealloc;

@end

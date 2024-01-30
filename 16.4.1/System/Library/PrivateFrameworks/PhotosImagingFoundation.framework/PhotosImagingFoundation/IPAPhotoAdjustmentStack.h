@class IPAPhotoAdjustmentPipeline;

@interface IPAPhotoAdjustmentStack : IPAAdjustmentStack

@property (nonatomic) struct PFIntSize_st { unsigned long long width; unsigned long long height; } inputSize;
@property (nonatomic) long long orientation;
@property (retain, nonatomic) IPAPhotoAdjustmentPipeline *pipeline;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)maskUUIDs;
- (id)_debugDescriptionSuffix;
- (id)minimumVersionForFormat:(id)a0;

@end

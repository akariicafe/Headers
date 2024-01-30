@class iconclassification__generated__;

@interface AXMIconClassDetectorNode : AXMMobileAssetEvaluationNode

@property (readonly, nonatomic) iconclassification__generated__ *mlModel;

+ (BOOL)isSupported;
+ (BOOL)supportsSecureCoding;
+ (id)title;

- (void)evaluate:(id)a0 metrics:(id)a1;
- (id)modelResourceNames;
- (id)mlModelClasses;
- (id)mobileAssetType;
- (unsigned long long)minSupportedFormatVersion;
- (unsigned long long)maxSupportedFormatVersion;
- (id)_localizedClassForClass:(id)a0;

@end

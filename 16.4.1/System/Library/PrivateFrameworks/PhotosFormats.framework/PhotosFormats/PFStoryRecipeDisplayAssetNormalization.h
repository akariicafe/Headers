@class NSData, NSDictionary, NSString;
@protocol _PFStoryRecipeDisplayAssetNormalizationData;

@interface PFStoryRecipeDisplayAssetNormalization : NSObject <NSCopying> {
    id<_PFStoryRecipeDisplayAssetNormalizationData> _normalizationData;
}

@property (readonly, nonatomic) NSData *analysisData;
@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) NSDictionary *tempTintProperties;
@property (readonly, nonatomic) NSDictionary *smartToneProperties;
@property (readonly, nonatomic) NSDictionary *highKeyProperties;
@property (readonly, nonatomic) NSDictionary *smartColorProperties;
@property (readonly, nonatomic) NSString *detailedDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)initWithAnalysisData:(id)a0;

@end

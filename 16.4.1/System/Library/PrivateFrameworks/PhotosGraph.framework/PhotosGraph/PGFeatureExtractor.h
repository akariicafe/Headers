@class NSString;

@interface PGFeatureExtractor : MAFeatureExtractor <PGFeatureExtractorProtocol>

@property (readonly, nonatomic) long long featureLength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)featureExtractor;


@end

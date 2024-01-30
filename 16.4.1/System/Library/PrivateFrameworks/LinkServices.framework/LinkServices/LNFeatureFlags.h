@class NSDictionary;

@interface LNFeatureFlags : NSObject

@property (class, readonly, nonatomic) NSDictionary *allFeatures;
@property (class, readonly, nonatomic) BOOL isActionTranscriptEnabled;
@property (class, readonly, nonatomic) BOOL isRuntimeMetadataSupported;
@property (class, readonly, nonatomic) BOOL isStaticMetadataIngestionEnabled;
@property (class, readonly, nonatomic) BOOL isViewActionAnnotationEnabled;
@property (class, readonly, nonatomic) BOOL isVocabularyDonationEnabled;
@property (class, readonly, nonatomic) BOOL isLowPowerDeviceEnabled;

+ (void)setIsVocabularyDonationOverrideEnabled:(BOOL)a0;

@end

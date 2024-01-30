@class NSString;

@interface DESDediscoKey : NSObject

@property (readonly, copy, nonatomic) NSString *environment;
@property (readonly, copy, nonatomic) NSString *privacyID;
@property (readonly, copy, nonatomic) NSString *recipeID;

- (void).cxx_destruct;
- (id)metadataEncodedMetricsKeyString;
- (id)initWithPrivacyID:(id)a0 environment:(id)a1 recipeID:(id)a2;
- (id)metadataKeyString;
- (id)metricsKeyString;
- (id)resultsKeyString;
- (id)resultsKeyStringForChunk:(id)a0;

@end

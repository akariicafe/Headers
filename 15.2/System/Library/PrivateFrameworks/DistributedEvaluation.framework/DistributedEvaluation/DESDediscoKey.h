@class NSString;

@interface DESDediscoKey : NSObject

@property (readonly, copy, nonatomic) NSString *environment;
@property (readonly, copy, nonatomic) NSString *privacyID;
@property (readonly, copy, nonatomic) NSString *recipeID;

- (void).cxx_destruct;
- (id)resultsKeyStringForChunk:(id)a0;
- (id)resultsKeyString;
- (id)metricsKeyString;
- (id)metadataKeyString;
- (id)initWithPrivacyID:(id)a0 environment:(id)a1 recipeID:(id)a2;

@end

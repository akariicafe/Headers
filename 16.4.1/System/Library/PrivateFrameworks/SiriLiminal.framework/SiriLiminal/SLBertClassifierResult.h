@class NSArray, NSString, NSDictionary;

@interface SLBertClassifierResult : NSObject

@property (readonly, nonatomic) NSArray *domainProb;
@property (readonly, nonatomic) NSString *assetVersion;
@property (readonly, nonatomic) NSDictionary *extractedFeats;

- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)initWithScore:(id)a0 assetVersion:(id)a1 extractedFeats:(id)a2;

@end

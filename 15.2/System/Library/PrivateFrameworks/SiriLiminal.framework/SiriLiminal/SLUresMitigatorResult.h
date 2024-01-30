@class NSString, NSDictionary;

@interface SLUresMitigatorResult : NSObject

@property (readonly, nonatomic) float score;
@property (readonly, nonatomic) BOOL didMitigate;
@property (readonly, nonatomic) double decisionLevel;
@property (readonly, nonatomic) float threshold;
@property (readonly, nonatomic) NSString *assetVersion;
@property (readonly, nonatomic) NSDictionary *detailedResult;
@property (readonly, nonatomic) NSDictionary *extractedFeats;

- (void).cxx_destruct;
- (id)initWithScore:(float)a0 decision:(BOOL)a1 decisionLevel:(double)a2 detailedResults:(id)a3 extractedFeats:(id)a4;

@end

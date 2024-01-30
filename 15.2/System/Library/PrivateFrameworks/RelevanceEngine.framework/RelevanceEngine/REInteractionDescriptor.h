@class NSString, REFeature;

@interface REInteractionDescriptor : NSObject <REAutomaticExportedInterface, NSCopying>

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) REFeature *identificationFeature;
@property (retain, nonatomic) REFeature *selectionFeature;
@property (retain, nonatomic) REFeature *biasFeature;
@property (nonatomic) float weight;
@property (nonatomic) BOOL enableExploreExploit;
@property (nonatomic) float exploreBias;
@property (nonatomic) float trainingSimulationExploreBias;
@property (nonatomic) float initialProbability;
@property (nonatomic) float varianceEpsilon;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end

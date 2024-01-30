@class DRSSamplingParameters, NSString, NSDictionary, DRConfig;

@interface DRSTeamTasking : NSObject

@property (readonly, nonatomic) NSString *teamID;
@property (readonly, nonatomic) DRConfig *config;
@property (readonly, nonatomic) DRSSamplingParameters *defaultSamplingParameters;
@property (readonly, nonatomic) NSDictionary *perTimezoneSamplingParameters;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSONDict:(id)a0 receivedDate:(id)a1;
- (id)jsonDictRepresentation;
- (id)samplingParametersForTimezoneAbbreviation:(id)a0;
- (BOOL)isEqualToTeamTasking:(id)a0;
- (id)initWithTeamID:(id)a0 config:(id)a1 defaultSamplingParameters:(id)a2 perTimezoneSamplingParameters:(id)a3;

@end

@class DRSSamplingParameters, NSString, NSDictionary, DRConfig;

@interface DRSTeamTasking : NSObject

@property (readonly, nonatomic) NSString *teamID;
@property (readonly, nonatomic) DRConfig *config;
@property (readonly, nonatomic) DRSSamplingParameters *defaultSamplingParameters;
@property (readonly, nonatomic) NSDictionary *perTimezoneSamplingParameters;
@property (readonly, nonatomic) NSDictionary *perHWModelSamplingParameters;

- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithJSONDict:(id)a0 receivedDate:(id)a1;
- (id)jsonDictRepresentation;
- (id)_jsonDictRepresentation:(BOOL)a0;
- (id)initWithTeamID:(id)a0 config:(id)a1 defaultSamplingParameters:(id)a2 perTimezoneSamplingParameters:(id)a3 perHardwareModelSamplingParamters:(id)a4;
- (BOOL)isEqualToTeamTasking:(id)a0;
- (id)jsonDictRepresentationAbbreviated;
- (id)samplingParametersForHWModel:(id)a0 timezoneAbbreviation:(id)a1;
- (id)samplingParametersForHardwareModel:(id)a0;
- (id)samplingParametersForTimezoneAbbreviation:(id)a0;

@end

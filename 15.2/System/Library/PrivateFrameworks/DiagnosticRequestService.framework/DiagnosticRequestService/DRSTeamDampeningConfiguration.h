@class NSDictionary, DRSDampeningConfiguration;

@interface DRSTeamDampeningConfiguration : NSObject

@property (retain, nonatomic) DRSDampeningConfiguration *defaultConfiguration;
@property (retain, nonatomic) NSDictionary *issueCategoryToConfigurationDict;

- (id)configurationForIssueCategory:(id)a0;
- (id)jsonCompatibleDictRepresentation;
- (id)_initWithTeamDampeningConfigMO_ON_MOC_QUEUE:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithDefaultConfiguration:(id)a0 issueCategoryToConfigurationDict:(id)a1;
- (id)debugDescription;
- (id)_ON_MOC_QUEUE_moRepresentationInContext:(id)a0 teamID:(id)a1;

@end

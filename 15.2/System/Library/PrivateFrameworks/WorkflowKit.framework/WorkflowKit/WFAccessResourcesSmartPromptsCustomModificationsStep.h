@class NSDictionary, NSString;

@interface WFAccessResourcesSmartPromptsCustomModificationsStep : NSObject <WFProgressiveMigrationCustomModificationsStep>

@property (readonly, nonatomic) NSDictionary *contentDestinationsByAccessResourceIdentifier;
@property (readonly, nonatomic) NSDictionary *actionIdentifiersByContentDestination;
@property (readonly, nonatomic) NSDictionary *accessResourceIdentifiersByContentDestination;
@property (readonly, nonatomic) NSDictionary *contentDestinationsByActionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)performModificationsWithContext:(id)a0 error:(id *)a1;
- (void)migrateAccessResourcesToSmartPromptsForWorkflow:(id)a0 context:(id)a1;
- (id)contentDestinationForActionIdentifier:(id)a0 statesByAccessResourceIdentifier:(id)a1;
- (id)bundleIdentifierForIntentBasedActionIdentifier:(id)a0 accessResourceIdentifiers:(id)a1;
- (id)fetchStatesByAccessResourceIdentifierForWorkflow:(id)a0 context:(id)a1;
- (id)fetchMigrationEligibleActionUUIDsForWorkflow:(id)a0 context:(id)a1 workflowAccessResourceIdentifiers:(id)a2;
- (id)extractBundleIdentifierFromIntentsAccessResourceIdentifier:(id)a0;
- (BOOL)shortcutHasSmartPromptsData:(id)a0 context:(id)a1;
- (id)actionIdentifiersThatRequireMigrationForAccessResourceIdentifiers:(id)a0;

@end

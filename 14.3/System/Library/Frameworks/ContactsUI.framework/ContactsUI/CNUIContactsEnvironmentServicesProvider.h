@interface CNUIContactsEnvironmentServicesProvider : NSObject

+ (id)applicationWorkspace;
+ (id)suggestionsService;
+ (id)defaultUserActionFetcher;
+ (id)recentsManagerWithSchedulerProvider:(id)a0;
+ (id)idsIDQueryControllerWrapper;
+ (id)capabilities;

@end

@interface CNUIContactsEnvironmentServicesProvider : NSObject

+ (id)capabilities;
+ (id)suggestionsService;
+ (id)defaultUserActionFetcher;
+ (id)applicationWorkspace;
+ (id)idsIDQueryControllerWrapper;
+ (id)recentsManagerWithSchedulerProvider:(id)a0;

@end

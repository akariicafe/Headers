@interface CNUIContactsEnvironmentServicesProvider : NSObject

+ (id)suggestionsService;
+ (id)capabilities;
+ (id)defaultUserActionFetcher;
+ (id)recentsManagerWithSchedulerProvider:(id)a0;
+ (id)idsIDQueryControllerWrapper;
+ (id)applicationWorkspace;

@end

@interface CNUIContactsEnvironmentServicesProvider : NSObject

+ (id)capabilities;
+ (id)suggestionsService;
+ (id)applicationWorkspace;
+ (id)defaultUserActionFetcher;
+ (id)idsIDQueryControllerWrapper;
+ (id)recentsManagerWithSchedulerProvider:(id)a0;

@end

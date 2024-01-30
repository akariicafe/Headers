@class ATXUserEducationSuggestionSleepMigrationServer, ATXUserEducationSuggestionExploreFacesServer, ATXUserEducationSuggestionCustomizeFocusServer, ATXUserEducationSuggestionConnector;

@interface ATXUserEducationSuggestionServer : NSObject {
    ATXUserEducationSuggestionConnector *_connector;
}

@property (readonly, nonatomic) ATXUserEducationSuggestionCustomizeFocusServer *customizeFocusServer;
@property (readonly, nonatomic) ATXUserEducationSuggestionSleepMigrationServer *sleepMigrationServer;
@property (readonly, nonatomic) ATXUserEducationSuggestionExploreFacesServer *exploreFacesServer;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;

@end

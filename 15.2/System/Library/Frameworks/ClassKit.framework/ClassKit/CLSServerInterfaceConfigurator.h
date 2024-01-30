@class NSSet, NSXPCInterface;

@interface CLSServerInterfaceConfigurator : NSObject {
    NSXPCInterface *_interface;
    NSSet *_contextsSet;
    NSSet *_arraySet;
    NSSet *_sortDescriptorsSet;
}

- (void)configureFeatureAvailabilityAPI;
- (void)configureSaveAPI;
- (void)configureHandoutAPI;
- (void)configureAssetSupportAPI;
- (void)configureAppsAPI;
- (void)configureAuthorizationStatusAPI;
- (void)configureProgressReportingAPI;
- (void)configureCollectionsAPI;
- (void)configureUtilityServerAPI;
- (void)configureUserNotificationAPI;
- (void)configureClassAPI;
- (void)configureStudentActivityAPI;
- (void).cxx_destruct;
- (void)configureSurveyAnswerAPI;
- (id)init;
- (void)configureDashboardAppAPI;
- (void)configureDataObserverAPI;
- (id)configureServerInterface;
- (void)configureQueryAPI;
- (void)configureContextAPI;
- (void)configureAdminRequestAPI;
- (void)configureCollaborationStateAPI;

@end

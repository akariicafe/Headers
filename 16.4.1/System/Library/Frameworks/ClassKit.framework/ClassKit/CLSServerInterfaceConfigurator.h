@class NSSet, NSXPCInterface;

@interface CLSServerInterfaceConfigurator : NSObject {
    NSXPCInterface *_interface;
    NSSet *_contextsSet;
    NSSet *_arraySet;
}

- (void)configureCollectionsAPI;
- (void)configureAppsAPI;
- (void)configureDashboardAppAPI;
- (void)configureRelayRequestAPI;
- (void)configureAuthorizationStatusAPI;
- (void)configureProgressReportingAPI;
- (id)configureServerInterface;
- (void)configureAssetSupportAPI;
- (void)configureContextAPI;
- (void)configureClassAPI;
- (void)configureUserNotificationAPI;
- (void)configureDataObserverAPI;
- (void)configureStudentActivityAPI;
- (void)configureUtilityServerAPI;
- (void)configureHandoutAPI;
- (void)configureSurveyAnswerAPI;
- (void)configureFeatureAvailabilityAPI;
- (id)init;
- (void)configureCollaborationStateAPI;
- (void)configureQueryAPI;
- (void).cxx_destruct;
- (void)configureInsightEventsAPI;
- (void)configureAdminRequestAPI;
- (void)configureSaveAPI;

@end

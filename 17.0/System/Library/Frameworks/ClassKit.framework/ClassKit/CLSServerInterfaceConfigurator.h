@class NSSet, NSXPCInterface;

@interface CLSServerInterfaceConfigurator : NSObject {
    NSXPCInterface *_interface;
    NSSet *_contextsSet;
    NSSet *_arraySet;
}

- (id)init;
- (void)configureStudentActivityAPI;
- (void)configureFeatureAvailabilityAPI;
- (id)configureServerInterface;
- (void)configureAppsAPI;
- (void)configureRelayRequestAPI;
- (void)configureInsightEventsAPI;
- (void)configureContextAPI;
- (void)configureHandoutAPI;
- (void)configureProgressReportingAPI;
- (void)configureDataObserverAPI;
- (void)configureAdminRequestAPI;
- (void).cxx_destruct;
- (void)configureCollectionsAPI;
- (void)configureCollaborationStateAPI;
- (void)configureQueryAPI;
- (void)configureSurveyAnswerAPI;
- (void)configureAuthorizationStatusAPI;
- (void)configureClassAPI;
- (void)configureDashboardAppAPI;
- (void)configureSaveAPI;
- (void)configureUtilityServerAPI;
- (void)configureUserNotificationAPI;
- (void)configureAssetSupportAPI;

@end

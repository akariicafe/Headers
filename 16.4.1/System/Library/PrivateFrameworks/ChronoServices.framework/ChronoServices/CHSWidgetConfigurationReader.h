@class CHSChronoServicesConnection;

@interface CHSWidgetConfigurationReader : NSObject {
    CHSChronoServicesConnection *_connection;
}

- (void)allConfiguredWidgetsWithCompletion:(id /* block */)a0;
- (id)_transformResults:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end

@protocol CHSChronoWidgetServiceServer;

@interface CHSWidgetConfigurationReader : NSObject {
    id<CHSChronoWidgetServiceServer> _server;
}

- (id)_transformResults:(id)a0;
- (void)allConfiguredWidgetsWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end

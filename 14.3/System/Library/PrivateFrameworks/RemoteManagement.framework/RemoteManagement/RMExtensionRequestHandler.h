@class RMExtensionStatusPublisher, RMExtensionConfigurationSubscriber, NSString;

@interface RMExtensionRequestHandler : NSObject <NSExtensionRequestHandling, RMExtensionConfigurationSubscriberRequestHandling, RMExtensionStatusPublisherRequestHandling>

@property (readonly, nonatomic) RMExtensionConfigurationSubscriber *configurationSubscriber;
@property (readonly, nonatomic) RMExtensionStatusPublisher *statusPublisher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)beginRequestWithExtensionContext:(id)a0;
- (void)fetchThenApplyConfigurationsWithCompletionHandler:(id /* block */)a0;
- (void)queryForStatusWithKeyPaths:(id)a0 onBehalfOfManagementChannel:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithConfigurationSubscriber:(id)a0 statusPublisher:(id)a1;

@end

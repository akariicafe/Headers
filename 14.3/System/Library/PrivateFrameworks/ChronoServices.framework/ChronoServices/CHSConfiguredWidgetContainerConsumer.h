@protocol CHSChronoWidgetServiceServer;

@interface CHSConfiguredWidgetContainerConsumer : NSObject

@property (readonly, nonatomic) id<CHSChronoWidgetServiceServer> server;

- (id)initWithServer:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)receiveConfiguredWidgetContainerDescriptors:(id)a0;

@end

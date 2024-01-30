@protocol CHSChronoWidgetServiceServer;

@interface CHSApplicationProcessStateChangeConsumer : NSObject

@property (readonly, nonatomic) id<CHSChronoWidgetServiceServer> server;

- (id)initWithServer:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)applicationWithBundleIdentifierEnteredForeground:(id)a0;

@end

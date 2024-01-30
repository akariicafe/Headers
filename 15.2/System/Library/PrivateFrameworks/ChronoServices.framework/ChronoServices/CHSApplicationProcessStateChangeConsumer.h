@protocol CHSChronoWidgetServiceServer;

@interface CHSApplicationProcessStateChangeConsumer : NSObject

@property (readonly, nonatomic) id<CHSChronoWidgetServiceServer> server;

- (void).cxx_destruct;
- (id)init;
- (void)applicationWithBundleIdentifierEnteredForeground:(id)a0;
- (id)initWithServer:(id)a0;

@end

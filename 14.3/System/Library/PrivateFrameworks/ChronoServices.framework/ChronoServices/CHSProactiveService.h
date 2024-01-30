@protocol CHSChronoWidgetServiceServer;

@interface CHSProactiveService : NSObject

@property (readonly, nonatomic) id<CHSChronoWidgetServiceServer> server;

- (id)initWithServer:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end

@protocol CHSChronoWidgetServiceServer;

@interface CHSNSURLSessiondService : NSObject

@property (readonly, nonatomic) id<CHSChronoWidgetServiceServer> server;

- (id)initWithServer:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)URLSessionDidCompleteForExtensionWithBundleIdentifier:(id)a0 info:(id)a1;

@end

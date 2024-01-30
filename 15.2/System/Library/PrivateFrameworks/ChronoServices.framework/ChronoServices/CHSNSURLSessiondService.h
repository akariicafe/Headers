@protocol CHSChronoWidgetServiceServer;

@interface CHSNSURLSessiondService : NSObject

@property (readonly, nonatomic) id<CHSChronoWidgetServiceServer> server;

- (void).cxx_destruct;
- (id)init;
- (id)URLSessionDidCompleteForExtensionWithBundleIdentifier:(id)a0 info:(id)a1;
- (id)initWithServer:(id)a0;

@end

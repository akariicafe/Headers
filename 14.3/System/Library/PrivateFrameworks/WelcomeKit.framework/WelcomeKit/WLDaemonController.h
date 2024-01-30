@class WLDaemonConnection;

@interface WLDaemonController : NSObject

@property (retain, nonatomic) WLDaemonConnection *connection;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)importLocalContent;
- (void)setStashDataLocally:(BOOL)a0;
- (void)getLocalImportOptionsWithCompletion:(id /* block */)a0;

@end

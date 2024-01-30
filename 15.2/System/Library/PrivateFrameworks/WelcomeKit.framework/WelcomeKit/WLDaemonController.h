@class WLDaemonConnection;

@interface WLDaemonController : NSObject

@property (retain, nonatomic) WLDaemonConnection *connection;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)importLocalContent;
- (void)setStashDataLocally:(BOOL)a0;
- (void)getLocalImportOptionsWithCompletion:(id /* block */)a0;

@end

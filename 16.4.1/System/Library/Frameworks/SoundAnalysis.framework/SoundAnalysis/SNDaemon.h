@class SNFileServer;

@interface SNDaemon : NSObject {
    SNFileServer *_fileServer;
}

- (void)run;
- (id)init;
- (void).cxx_destruct;

@end

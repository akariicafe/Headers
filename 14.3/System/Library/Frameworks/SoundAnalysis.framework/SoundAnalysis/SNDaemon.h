@class SNFileServer;

@interface SNDaemon : NSObject {
    SNFileServer *_fileServer;
}

+ (BOOL)isCurrentProcessEntitledToHostDaemon;
+ (id)createFileServer;

- (void)run;
- (id)init;
- (void).cxx_destruct;

@end

@class SNFileServer;

@interface SNDaemon : NSObject {
    SNFileServer *_fileServer;
}

+ (BOOL)isCurrentProcessEntitledToHostDaemon;
+ (id)createFileServer;

- (void)run;
- (void).cxx_destruct;
- (id)init;

@end

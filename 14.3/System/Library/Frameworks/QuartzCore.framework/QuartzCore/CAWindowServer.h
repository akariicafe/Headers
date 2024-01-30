@class NSArray;

@interface CAWindowServer : NSObject {
    struct CAWindowServerImpl { struct __CFArray *x0; unsigned int x1; } *_impl;
}

@property (readonly) NSArray *displays;
@property (getter=isMirroringEnabled) BOOL mirroringEnabled;
@property unsigned int rendererFlags;
@property (getter=isSecure) BOOL secure;

+ (id)context;
+ (id)serverIfRunning;
+ (id)contextWithOptions:(id)a0;
+ (id)server;
+ (id)serverWithOptions:(id)a0;
+ (void)stopServer;

- (unsigned int)taskNamePortOfContextId:(unsigned int)a0;
- (void)_detectDisplays;
- (id)init;
- (unsigned int)contextIdHostingContextId:(unsigned int)a0;
- (unsigned int)clientPortOfContextId:(unsigned int)a0;
- (id)displayWithName:(id)a0;
- (void)dealloc;
- (void)removeAllDisplays;
- (void)removeDisplay:(id)a0;
- (void)addDisplay:(id)a0;
- (id)description;
- (id)_init;
- (id)displayWithUniqueId:(id)a0;
- (id)displayWithDisplayId:(unsigned int)a0;
- (id)insecureProcessIds;
- (id)secureModeViolations;

@end

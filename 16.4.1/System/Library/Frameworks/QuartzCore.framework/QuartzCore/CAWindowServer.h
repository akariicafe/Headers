@class NSArray;

@interface CAWindowServer : NSObject {
    struct CAWindowServerImpl { struct __CFArray *x0; unsigned int x1; id /* block */ x2; } *_impl;
}

@property (readonly) NSArray *displays;
@property (getter=isMirroringEnabled) BOOL mirroringEnabled;
@property unsigned int rendererFlags;
@property (getter=isSecure) BOOL secure;
@property id /* block */ slotDeletionCallback;

+ (void)stopServer;
+ (id)serverIfRunning;
+ (id)server;
+ (id)context;
+ (id)serverWithOptions:(id)a0;
+ (id)contextWithOptions:(id)a0;

- (unsigned int)taskNamePortOfContextId:(unsigned int)a0;
- (unsigned int)clientPortOfContextId:(unsigned int)a0;
- (void)removeAllDisplays;
- (BOOL)isSlotValid:(unsigned int)a0;
- (void)addDisplay:(id)a0;
- (id)_init;
- (id)insecureProcessIds;
- (void)dealloc;
- (unsigned int)contextIdHostingContextId:(unsigned int)a0;
- (id)init;
- (void)removeDisplay:(id)a0;
- (id)displayWithDisplayId:(unsigned int)a0;
- (id)description;
- (id)secureModeViolations;
- (void)_detectDisplays;
- (id)displayWithName:(id)a0;
- (id)displayWithUniqueId:(id)a0;

@end

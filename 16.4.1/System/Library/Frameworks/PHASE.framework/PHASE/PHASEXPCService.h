@class NSString, NSXPCListener, NSXPCInterface;
@protocol PHASEPlatform;

@interface PHASEXPCService : NSObject <NSXPCListenerDelegate> {
    NSXPCInterface *_interface;
    NSXPCListener *_mainListener;
    unsigned long long _connectionUIDGenerator;
    id<PHASEPlatform> _platform;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)sharedInstanceWithPlatform:(id)a0;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)init;
- (id)initWithXPCListener:(id)a0;
- (void).cxx_destruct;
- (void)resumeListener;
- (unsigned long long)newConnectionUID;

@end

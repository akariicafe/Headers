@class NSXPCConnection;
@protocol MobileGestaltHelper;

@interface MobileGestaltHelperProxy : NSObject

@property int error;
@property (readonly) id<MobileGestaltHelper> helper;
@property (readonly) NSXPCConnection *connection;

+ (id)proxy;

- (BOOL)proxyRebuildCache;
- (void)dealloc;
- (BOOL)proxySetCacheSentinel;
- (id)init;
- (void)invalidate;

@end

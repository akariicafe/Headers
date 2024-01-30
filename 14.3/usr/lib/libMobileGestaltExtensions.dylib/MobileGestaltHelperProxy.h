@class NSXPCConnection;
@protocol MobileGestaltHelper;

@interface MobileGestaltHelperProxy : NSObject

@property int error;
@property (readonly) id<MobileGestaltHelper> helper;
@property (readonly) NSXPCConnection *connection;

+ (id)proxy;

- (id)init;
- (void)dealloc;
- (BOOL)proxyRebuildCache;
- (void)invalidate;

@end

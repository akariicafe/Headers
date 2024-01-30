@class NSString, NSDictionary, NSURL, NSObject;
@protocol OS_xpc_object;

@interface PKBundle : NSObject

@property (retain) NSObject<OS_xpc_object> *_bundle;
@property (readonly) NSURL *url;
@property (readonly) NSString *path;
@property (readonly) NSDictionary *infoDictionary;
@property (readonly) NSString *bundleIdentifier;
@property (readonly) NSString *supportPath;
@property (readonly) NSString *executablePath;
@property (readonly) NSString *plugInsPath;

- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (id)initWithXPCBundle:(id)a0;
- (id)initWithURL:(id)a0;
- (id)initWithExecutableURL:(id)a0;
- (id)stringProperty:(int)a0;
- (id)initWithExecutablePath:(id)a0;
- (id)initForMainBundle;
- (id)bundleDirectory:(id)a0;

@end

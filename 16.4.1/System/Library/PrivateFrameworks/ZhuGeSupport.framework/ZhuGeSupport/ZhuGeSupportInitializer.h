@class NSDictionary, NSXPCConnection, ZhuGeSupportConfigHelper;

@interface ZhuGeSupportInitializer : ZhuGeSupportSingleton

@property BOOL initXPCDone;
@property (retain) ZhuGeSupportConfigHelper *configHelper;
@property (retain) id c2sXpcProxy;
@property (retain) NSDictionary *s2cPivotalConf;
@property (retain) NSXPCConnection *s2cXpcConnection;
@property (retain) NSDictionary *s2cElucidateDict;

- (void).cxx_destruct;
- (void)initData;

@end

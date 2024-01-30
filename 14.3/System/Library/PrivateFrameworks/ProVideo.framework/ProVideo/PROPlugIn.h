@interface PROPlugIn : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)infoDictionary;
- (id)bundle;
- (BOOL)isBlocked;
- (void)setIsBlocked:(BOOL)a0;
- (struct __CFUUID { } *)uuid;
- (id)group;
- (id)version;
- (void)setDelegate:(id)a0;
- (id)className;
- (id)helpURL;
- (id)delegate;
- (id)displayName;
- (Class)plugInClass;
- (id)plugInInstance;
- (id)pluginKitPlug;
- (id)implementedProtocols;
- (id)blockedLookupKey;
- (BOOL)isEqualToPlugIn:(id)a0;
- (id)initWithDictionary:(id)a0 bundle:(id)a1 delegate:(id)a2;
- (void)setBlockedLookupKey:(id)a0 pluginName:(id)a1 version:(id)a2;
- (id)sharedPlugInInstance;
- (id)apiUsedByPlugInForProtocol:(id)a0;
- (id)infoString;

@end

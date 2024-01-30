@interface PROPlugIn : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)group;
- (id)className;
- (id)displayName;
- (id)infoDictionary;
- (id)bundle;
- (void)setIsBlocked:(BOOL)a0;
- (BOOL)isBlocked;
- (id)version;
- (void)setDelegate:(id)a0;
- (id)helpURL;
- (id)delegate;
- (struct __CFUUID { } *)uuid;
- (Class)plugInClass;
- (id)plugInInstance;
- (id)pluginKitPlug;
- (id)implementedProtocols;
- (id)blockedLookupKey;
- (BOOL)isEqualToPlugIn:(id)a0;
- (id)initWithDictionary:(id)a0 bundle:(id)a1 delegate:(id)a2;
- (void)setBlockedLookupKey:(id)a0 pluginName:(id)a1 version:(id)a2;
- (id)sharedPlugInInstance;
- (id)infoString;
- (id)apiUsedByPlugInForProtocol:(id)a0;

@end

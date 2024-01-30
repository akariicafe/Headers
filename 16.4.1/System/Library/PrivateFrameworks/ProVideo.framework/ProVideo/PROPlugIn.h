@interface PROPlugIn : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)delegate;
- (id)group;
- (id)version;
- (id)displayName;
- (id)bundle;
- (id)className;
- (BOOL)isBlocked;
- (id)infoDictionary;
- (void)setDelegate:(id)a0;
- (struct __CFUUID { } *)uuid;
- (void)setIsBlocked:(BOOL)a0;
- (id)helpURL;
- (id)apiUsedByPlugInForProtocol:(id)a0;
- (id)blockedLookupKey;
- (id)implementedProtocols;
- (id)infoString;
- (id)initWithDictionary:(id)a0 bundle:(id)a1 delegate:(id)a2;
- (BOOL)is3rdParty;
- (BOOL)isEqualToPlugIn:(id)a0;
- (Class)plugInClass;
- (id)plugInInstance;
- (id)pluginKitPlug;
- (void)setBlockedLookupKey:(id)a0 pluginName:(id)a1 version:(id)a2;
- (id)sharedPlugInInstance;

@end

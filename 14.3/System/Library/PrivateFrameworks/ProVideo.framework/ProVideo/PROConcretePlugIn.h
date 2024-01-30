@class NSBundle, NSDictionary, NSString, NSURL, PROPlugInGroup;
@protocol PROPlugInDelegate, PKPlugIn;

@interface PROConcretePlugIn : PROPlugIn <NSCopying> {
    NSBundle *bundle;
    struct __CFUUID { } *uuidRef;
    NSDictionary *infoDictionary;
    PROPlugInGroup *group;
    NSString *localizationTableName;
    NSURL *helpURL;
    id sharedInstance;
    struct { unsigned char loadedInstanceEver : 1; unsigned char checkedForIcon : 1; unsigned char checkedForHelp : 1; } plugInFlags;
    id<PROPlugInDelegate> delegate;
    id<PKPlugIn> pluginKitPlug;
    BOOL entirelyOutOfProcess;
    BOOL _isBlocked;
    NSString *_blockedLookupKey;
}

- (id)infoDictionary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)bundle;
- (void)dealloc;
- (BOOL)isBlocked;
- (void)setIsBlocked:(BOOL)a0;
- (unsigned long long)hash;
- (struct __CFUUID { } *)uuid;
- (id)description;
- (id)group;
- (id)version;
- (id)uuidString;
- (id)vendorName;
- (BOOL)isEqual:(id)a0;
- (void)reportError:(id)a0;
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
- (id)initWithDictionary:(id)a0 bundle:(id)a1 delegate:(id)a2 pluginKitPlug:(id)a3;
- (id)infoString;

@end

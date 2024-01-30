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

- (id)group;
- (id)className;
- (id)displayName;
- (id)infoDictionary;
- (id)bundle;
- (void)setIsBlocked:(BOOL)a0;
- (id)uuidString;
- (BOOL)isBlocked;
- (id)vendorName;
- (id)version;
- (id)description;
- (void)setDelegate:(id)a0;
- (id)helpURL;
- (BOOL)isEqual:(id)a0;
- (id)delegate;
- (void)reportError:(id)a0;
- (struct __CFUUID { } *)uuid;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (Class)plugInClass;
- (id)plugInInstance;
- (id)pluginKitPlug;
- (id)implementedProtocols;
- (id)blockedLookupKey;
- (id)initWithDictionary:(id)a0 bundle:(id)a1 delegate:(id)a2 pluginKitPlug:(id)a3;
- (BOOL)isEqualToPlugIn:(id)a0;
- (id)initWithDictionary:(id)a0 bundle:(id)a1 delegate:(id)a2;
- (void)setBlockedLookupKey:(id)a0 pluginName:(id)a1 version:(id)a2;
- (id)sharedPlugInInstance;
- (id)infoString;
- (id)apiUsedByPlugInForProtocol:(id)a0;

@end

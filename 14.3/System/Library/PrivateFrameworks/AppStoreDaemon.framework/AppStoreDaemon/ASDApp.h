@class ASDProgress, NSString, NSProgress, NSUUID, NSError, NSNumber;

@interface ASDApp : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *artistName;
@property (retain) NSString *bundlePath;
@property (retain) NSString *bundleShortVersion;
@property (retain) NSString *bundleVersion;
@property (retain) NSError *installError;
@property (retain) NSString *localizedName;
@property long long storeExternalVersionID;
@property long long storeItemID;
@property (retain) NSString *storeCohort;
@property (retain) NSNumber *storeFront;
@property long long downloaderDSID;
@property long long familyID;
@property long long purchaserDSID;
@property long long extensions;
@property long long status;
@property (retain) NSProgress *progress;
@property (retain) ASDProgress *remoteProgress;
@property (retain) NSString *updateBuyParams;
@property long long watchApplicationMode;
@property (readonly) NSString *bundleID;
@property (readonly, getter=hasMessagesExtension) BOOL messasgesExtension;
@property (readonly, getter=isAppClip) BOOL appClip;
@property (readonly, getter=isArcadeOpenable) BOOL arcadeOpenable;
@property (readonly, getter=isBetaApp) BOOL betaApp;
@property (readonly, getter=isFamilyShared) BOOL familyShared;
@property (readonly, getter=isInstalled) BOOL installed;
@property (readonly, getter=isLaunchProhibited) BOOL launchProhibited;
@property (readonly, getter=isOcelot) BOOL ocelot;
@property (readonly, getter=isOpenable) BOOL openable;
@property (readonly, getter=isPlaceholder) BOOL placeholder;
@property (readonly, getter=isStoreApp) BOOL storeApp;
@property (readonly, getter=isSystemApp) BOOL systemApp;
@property (readonly, getter=isUpdateAvailable) BOOL updateAvailable;
@property (readonly, getter=isWrapped) BOOL wrapped;
@property (readonly) NSUUID *installID;

- (id)initWithBundleID:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqualToApp:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

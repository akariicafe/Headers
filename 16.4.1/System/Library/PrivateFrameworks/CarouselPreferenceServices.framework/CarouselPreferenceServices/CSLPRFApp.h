@class NSString, NSArray, NSURL, LSApplicationRecord, BBSectionInfo;

@interface CSLPRFApp : NSObject <CSLPRFApplication> {
    LSApplicationRecord *_lock_applicationRecord;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *sdkVersion;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, copy, nonatomic) NSString *SDKVersion;
@property (readonly, nonatomic) BOOL supportsAlwaysOnDisplay;
@property (readonly, nonatomic) BOOL defaultsToPrivateAlwaysOnDisplayTreatment;
@property (readonly, copy, nonatomic) NSArray *counterpartIdentifiers;
@property (readonly, nonatomic, getter=isLocal) BOOL local;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, weak, nonatomic) LSApplicationRecord *applicationRecord;
@property (readonly, nonatomic) BOOL isRemovedSystemApp;
@property (readonly, nonatomic) BOOL isBBSourcedApplication;
@property (readonly, nonatomic) BBSectionInfo *bbSectionInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)appWithACXRemoteApplication:(id)a0;
+ (id)appWithApplicationRecord:(id)a0;
+ (id)appWithBBSectionInfo:(id)a0;
+ (id)appWithBundleID:(id)a0 name:(id)a1 sdkVersion:(id)a2 supportsAlwaysOnDisplay:(BOOL)a3 defaultsToPrivateAlwaysOnDisplayTreatment:(BOOL)a4;

- (BOOL)isEqual:(id)a0;
- (id)bundleID;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)name;
- (id)sdkVersion;
- (id)initWithBundleIdentifier:(id)a0 localizedName:(id)a1 sdkVersion:(id)a2 supportsAlwaysOnDisplay:(BOOL)a3 defaultsToPrivateAlwaysOnDisplayTreatment:(BOOL)a4 applicationRecord:(id)a5 bbSectionInfo:(id)a6;

@end

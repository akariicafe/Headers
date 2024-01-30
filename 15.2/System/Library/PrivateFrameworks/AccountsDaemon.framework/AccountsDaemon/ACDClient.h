@class NSString, NSXPCConnection, ACDAccountStoreFilter, NSSet, NSNumber, NSMutableDictionary;

@interface ACDClient : NSObject {
    struct __CFBundle { } *_bundle;
    NSString *_bundleID;
    BOOL _didManuallySetBundleID;
    NSNumber *_pid;
    NSString *_localizedAppName;
    NSString *_name;
    NSMutableDictionary *_entitlementChecks;
    NSSet *_monitoredAccountTypes;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _clientPropertyLock;
}

@property (retain, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) struct __CFBundle { } *bundle;
@property (readonly, nonatomic) NSString *localizedAppName;
@property (readonly, nonatomic) NSString *adamOrDisplayID;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSNumber *pid;
@property (readonly, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) ACDAccountStoreFilter *filter;
@property (retain, nonatomic) NSSet *monitoredAccountTypes;

+ (id)_bundleIDForPID:(int)a0;
+ (id)_bundleForPID:(int)a0;
+ (id)clientWithBundleID:(id)a0;
+ (id)_bundleForNonPlugInPID:(int)a0;

- (id)_rawValueForEntitlement:(id)a0;
- (BOOL)hasEntitlement:(id)a0;
- (id)initWithConnection:(id)a0;
- (id)_displayNameFromLaunchServicesForPID:(int)a0;
- (id)description;
- (id)_displayNameFromBundleInfoDictionaryForPID:(int)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

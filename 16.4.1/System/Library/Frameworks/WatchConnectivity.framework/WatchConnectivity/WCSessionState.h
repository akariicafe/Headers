@class NSString, NSSet, NSURL;

@interface WCSessionState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, getter=isReachable) BOOL reachable;
@property (readonly, getter=isPaired) BOOL paired;
@property (readonly, getter=isAppInstalled) BOOL appInstalled;
@property (readonly, getter=isComplicationEnabled) BOOL complicationEnabled;
@property (readonly, getter=isStandaloneApp) BOOL standalone;
@property (readonly, getter=isCompanionAppInstalled) BOOL companionAppInstalled;
@property (readonly) unsigned long long remainingComplicationUserInfoTransfers;
@property (readonly) BOOL iOSDeviceNeedsFirstUnlock;
@property (readonly, copy) NSString *pairingID;
@property (readonly, copy) NSSet *pairedDevicesPairingIDs;
@property (readonly, copy) NSString *appInstallationID;
@property (readonly, copy) NSURL *watchDirectoryURL;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReachable:(BOOL)a0 paired:(BOOL)a1 appInstalled:(BOOL)a2 complicationEnabled:(BOOL)a3 remainingComplicationUserInfoTransfers:(unsigned long long)a4 activePairingID:(id)a5 pairedDevicesPairingIDs:(id)a6 appInstallationID:(id)a7;
- (id)initWithReachable:(BOOL)a0 paired:(BOOL)a1 appInstalled:(BOOL)a2 complicationEnabled:(BOOL)a3 remainingComplicationUserInfoTransfers:(unsigned long long)a4 iOSDeviceNeedsFirstUnlock:(BOOL)a5 pairingID:(id)a6 pairedDevicesPairingIDs:(id)a7 appInstallationID:(id)a8 standaloneApp:(BOOL)a9 companionAppInstalled:(BOOL)a10;
- (id)initWithReachable:(BOOL)a0 iOSDeviceNeedsFirstUnlock:(BOOL)a1 activePairingID:(id)a2 standaloneApp:(BOOL)a3 companionAppInstalled:(BOOL)a4;
- (id)description;
- (void).cxx_destruct;

@end

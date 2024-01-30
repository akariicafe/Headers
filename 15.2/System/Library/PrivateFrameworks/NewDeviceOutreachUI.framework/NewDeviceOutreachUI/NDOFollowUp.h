@protocol NDOFollowUpProvider;

@interface NDOFollowUp : NSObject

@property (retain) id<NDOFollowUpProvider> followUpProvider;

+ (id)uniqueIdentfierForSerialNumber:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (id)initWithFollowUpProvider:(id)a0;
- (BOOL)_postFollowUpWithDevicesInfo:(id)a0 repostAllowed:(BOOL)a1;
- (void)postFollowUpWithDeviceInfo:(id)a0;
- (void)_setupFollowUpItem:(id)a0 withDeviceInfo:(id)a1;
- (id)refreshFollowupWithDeviceInfos:(id)a0 clearUntrackedDeviceFollowups:(BOOL)a1 allowForcePost:(BOOL)a2;
- (void)_clearFollowUpWithDevices:(id)a0;
- (BOOL)postFollowUpWithDevicesInfo:(id)a0;
- (void)_clearFollowUpForSerialNumber:(id)a0;
- (void)dismissFollowUpForSerialNumber:(id)a0;
- (id)refreshFollowupWithDeviceInfo:(id)a0 allowForcePost:(BOOL)a1;
- (id)refreshFollowupWithDeviceInfos:(id)a0;
- (unsigned long long)pendingFollowUpCount;
- (void)migrateLegacyFollowUpIfNeededWithDeviceInfo:(id)a0;

@end

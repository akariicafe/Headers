@interface HFSoftwareUpdateCounter : NSObject

@property (nonatomic) unsigned long long softwareUpdatesReadyToInstall;
@property (nonatomic) unsigned long long softwareUpdatesInProgress;
@property (nonatomic) unsigned long long softwareUpdatesDownloading;
@property (nonatomic) unsigned long long softwareUpdatesInstalling;
@property (nonatomic) unsigned long long softwareUpdatesInstalled;
@property (nonatomic) unsigned long long firmwareUpdatesReadyToInstall;
@property (nonatomic) unsigned long long updatesReadyToInstall;
@property (nonatomic) unsigned long long allUpdates;

- (id)description;
- (id)init;
- (id)initWithAccessories:(id)a0;

@end

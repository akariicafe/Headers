@class NSSet;

@interface HFSoftwareUpdateCounter : NSObject

@property (nonatomic) unsigned long long availableSoftwareUpdates;
@property (nonatomic) unsigned long long softwareUpdatesInProgress;
@property (nonatomic) unsigned long long softwareUpdatesDownloading;
@property (nonatomic) unsigned long long softwareUpdatesInstalling;
@property (nonatomic) unsigned long long availableFirmwareUpdates;
@property (nonatomic) unsigned long long availableUpdates;
@property (retain, nonatomic) NSSet *accessoriesWithUpdates;

- (id)initWithAccessories:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)description;

@end

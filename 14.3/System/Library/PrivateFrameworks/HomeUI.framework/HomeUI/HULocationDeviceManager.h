@class NAFuture, FMFSession, NSHashTable, NSString;

@interface HULocationDeviceManager : NSObject <FMFSessionDelegate>

@property (readonly, nonatomic) FMFSession *fmfSession;
@property (retain, nonatomic) NAFuture *activeFMFDeviceFuture;
@property (retain, nonatomic) NAFuture *availableFMFDevicesFuture;
@property (readonly, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) NAFuture *availableLocationDevicesFuture;
@property (readonly, nonatomic) NAFuture *activeLocationDeviceFuture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didChangeActiveLocationSharingDevice:(id)a0;
- (void)didUpdateActiveDeviceList:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (id)updateActiveLocationDevice:(id)a0;
- (void)_updateActiveFMFDevice:(id)a0;

@end

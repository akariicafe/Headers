@class NSArray, NSString, HMHomeManager, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface ANHomeManager : NSObject <HMHomeManagerDelegate, HMHomeDelegate, HMHomeDelegatePrivate, HMAccessoryDelegatePrivate> {
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (readonly, nonatomic) BOOL isCurrentAccessoryHomePod;
@property (readonly, nonatomic) NSArray *homesSupportingAnnounce;
@property (retain, nonatomic) NSMutableArray *homesLoadedCompletionHandlers;
@property (nonatomic) BOOL homesLoaded;
@property (retain, nonatomic) NSMutableArray *delegates;
@property (readonly, nonatomic) HMHomeManager *homeManager;
@property (readonly, nonatomic) NSArray *allHomes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)removeDelegate:(id)a0;
- (void)home:(id)a0 didRemoveAccessory:(id)a1;
- (void)homeManager:(id)a0 didAddHome:(id)a1;
- (void)addDelegate:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)home:(id)a0 didAddAccessory:(id)a1;
- (void)home:(id)a0 didUpdateAccessControlForUser:(id)a1;
- (void)homeDidUpdateAccessControlForCurrentUser:(id)a0;
- (void)homeManagerDidUpdateHomes:(id)a0;
- (void)homeManager:(id)a0 didRemoveHome:(id)a1;
- (void)accessoryDidUpdateControllable:(id)a0;
- (id)initWithCaching:(BOOL)a0;
- (id)homeForID:(id)a0;
- (id)homeWithName:(id)a0;
- (id)homeNamesForContext:(id)a0;
- (BOOL)isLocalDeviceInRoom:(id)a0;
- (id)homesWithRoomNames:(id)a0;
- (id)homesWithZoneNames:(id)a0;
- (void)loadHomes:(id /* block */)a0;
- (void)_notifyManagerLoadedHomes:(id)a0;
- (void)_notifyDelegatesWithBlock:(id /* block */)a0;
- (id)_findBestHomeNames;
- (id)_homeNamesForAccessoryForContext:(id)a0;
- (id)_homeNamesForContext:(id)a0;
- (id)_currentHomesWeAreIn;

@end

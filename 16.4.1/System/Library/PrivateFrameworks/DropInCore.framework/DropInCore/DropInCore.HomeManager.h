@class NSArray, HMHome, HMAccessory;

@interface DropInCore.HomeManager : NSObject <HMHomeManagerDelegate, HMHomeDelegate, HMAccessoryDelegatePrivate, DICHomeManagerProviding> {
    void /* unknown type, empty encoding */ manager;
    void /* unknown type, empty encoding */ serialQueue;
    void /* unknown type, empty encoding */ homesLoadedHandlers;
    void /* unknown type, empty encoding */ delegatesToQueues;
}

@property (nonatomic) void /* unknown type, empty encoding */ homesLoaded;
@property (nonatomic, readonly) NSArray *allHomes;
@property (nonatomic, readonly) HMHome *currentHome;
@property (nonatomic, readonly) HMAccessory *currentAccessory;

- (void)home:(id)a0 didRemoveAccessory:(id)a1;
- (void)home:(id)a0 didAddUser:(id)a1;
- (void)homeManager:(id)a0 didRemoveHome:(id)a1;
- (void)homeManagerDidUpdateHomes:(id)a0;
- (void)home:(id)a0 didRemoveUser:(id)a1;
- (void)homeManager:(id)a0 didAddHome:(id)a1;
- (void)homeDidUpdateAccessControlForCurrentUser:(id)a0;
- (void)accessoryDidUpdateName:(id)a0;
- (void)home:(id)a0 didAddAccessory:(id)a1;
- (void)accessoryDidUpdateControllable:(id)a0;
- (void)addDelegate:(id)a0 queue:(id)a1;
- (id)init;
- (void)loadHomeSynchronous;
- (void)loadHomes:(id /* block */)a0;
- (void).cxx_destruct;

@end

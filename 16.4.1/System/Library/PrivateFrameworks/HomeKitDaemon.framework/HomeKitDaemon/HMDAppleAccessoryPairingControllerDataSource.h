@class NSArray, HAPPairingIdentity, NSNotificationCenter, NSString, HMDBulletinBoard;

@interface HMDAppleAccessoryPairingControllerDataSource : HMCContextProvider <HMDAppleAccessoryPairingControllerDataSource>

@property (readonly, nonatomic) NSArray *inProgressPairingAccessories;
@property (readonly, nonatomic) HAPPairingIdentity *hh1ControllerIdentity;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) HMDBulletinBoard *bulletinBoard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)deviceForIdentifier:(id)a0;
- (id)timerWithInterval:(double)a0 options:(unsigned long long)a1;
- (id)initWithContext:(id)a0;
- (void)deletePairingAccessoryState:(id)a0;
- (void)updatePairingAccessoryState:(id)a0;

@end

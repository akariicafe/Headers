@class HMHome, NSArray;

@interface ANAnnounceServiceDestination : NSObject

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) NSArray *accessories;
@property (retain, nonatomic) NSArray *users;
@property (retain, nonatomic) NSArray *devices;

+ (id)_destinationForHomePods:(id)a0 rapportConnection:(id)a1;
+ (id)destinationForHome:(id)a0 excludingRooms:(id)a1 excludingUsers:(id)a2 rapportConnection:(id)a3;
+ (id)relayDestinationForHome:(id)a0 rooms:(id)a1 rapportConnection:(id)a2 error:(id *)a3;
+ (id)destinationForHome:(id)a0 rapportConnection:(id)a1;
+ (id)destinationForRooms:(id)a0 inHome:(id)a1 rapportConnection:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (BOOL)addAccessory:(id)a0;
- (void)removeUser:(id)a0;
- (BOOL)addUser:(id)a0 inHome:(id)a1;
- (void)removeDeviceWithID:(id)a0;
- (id)idsIdentifiersForService:(id)a0;
- (id)participantsWithService:(id)a0;
- (BOOL)addDeviceWithID:(id)a0 rapportConnection:(id)a1;
- (void)addUser:(id)a0 inHome:(id)a1 rapportConnection:(id)a2;
- (void)removeUser:(id)a0 rapportConnection:(id)a1;

@end

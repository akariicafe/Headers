@class NSSet, NSDictionary, NSString, NSMutableSet;

@interface IDSFamilyService : IDSService <IDSDaemonListenerProtocol> {
    NSMutableSet *familyHandles;
    NSString *listenerID;
}

@property (retain, nonatomic) NSSet *familyMembers;
@property (retain, nonatomic) NSDictionary *dsidToFamilyMember;
@property (retain, nonatomic) NSDictionary *dsidToDeviceList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)service:(id)a0 familyInfoUpdated:(id)a1;
- (BOOL)sendProtobuf:(id)a0 toDestinations:(id)a1 priority:(long long)a2 options:(id)a3 identifier:(id *)a4 error:(id *)a5;
- (BOOL)sendMessage:(id)a0 toDestinations:(id)a1 priority:(long long)a2 options:(id)a3 identifier:(id *)a4 error:(id *)a5;
- (BOOL)sendData:(id)a0 toDestinations:(id)a1 priority:(long long)a2 options:(id)a3 identifier:(id *)a4 error:(id *)a5;
- (void).cxx_destruct;
- (id)familyHandles;
- (void)fetchFamilyMembersWithDevices:(id /* block */)a0;
- (BOOL)isValidDestination:(id)a0 error:(id *)a1;
- (BOOL)sendResourceAtURL:(id)a0 metadata:(id)a1 toDestinations:(id)a2 priority:(long long)a3 options:(id)a4 identifier:(id *)a5 error:(id *)a6;

@end

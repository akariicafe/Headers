@class NSSet, _IDSService, NSArray;

@interface IDSService : NSObject {
    _IDSService *_internal;
}

@property (readonly, nonatomic) _IDSService *_internal;
@property (readonly, copy, nonatomic) NSSet *internalAccounts;
@property (readonly, copy, nonatomic) NSSet *accounts;
@property (readonly, copy, nonatomic) NSArray *devices;

+ (void)serviceWithIdentifier:(id)a0 commands:(id)a1 manuallyAckMessages:(BOOL)a2 completion:(id /* block */)a3;
+ (id)removeSentinelFromAliases:(id)a0;
+ (BOOL)checkMessageSize:(unsigned long long)a0 priority:(long long)a1;
+ (void)serviceWithIdentifier:(id)a0 completion:(id /* block */)a1;

- (void)addDelegate:(id)a0 queue:(id)a1;
- (id)aliases;
- (void)removeDelegate:(id)a0;
- (void)performGroupTask:(id /* block */)a0;
- (BOOL)getProgressUpdateForIdentifier:(id)a0 error:(id *)a1;
- (id)datagramConnectionForSocketDescriptor:(int)a0 error:(id *)a1;
- (id)accountMatchingSim:(id)a0;
- (id)accountMatchingSimIdentifier:(id)a0;
- (id)uriForFromID:(id)a0;
- (id)iCloudAccount;
- (id)deviceForFromID:(id)a0;
- (BOOL)sendProtobuf:(id)a0 toDestinations:(id)a1 priority:(long long)a2 options:(id)a3 identifier:(id *)a4 error:(id *)a5;
- (BOOL)sendData:(id)a0 toDestinations:(id)a1 priority:(long long)a2 options:(id)a3 identifier:(id *)a4 error:(id *)a5;
- (id)datagramChannelForSessionDestination:(id)a0 error:(id *)a1;
- (id)streamConnectionForSessionDestination:(id)a0 error:(id *)a1;
- (void)testCloudQRConnection;
- (void).cxx_destruct;
- (BOOL)sendAccessoryData:(id)a0 toAccessoryID:(id)a1 accessToken:(id)a2 options:(id)a3 identifier:(id *)a4 error:(id *)a5;
- (BOOL)sendMessage:(id)a0 fromAccount:(id)a1 toDestinations:(id)a2 priority:(long long)a3 options:(id)a4 identifier:(id *)a5 error:(id *)a6;
- (void)dealloc;
- (void)activateAlias:(id)a0;
- (void)deactivateAlias:(id)a0;
- (void)activateAliases:(id)a0;
- (void)setLinkPreferences:(id)a0;
- (BOOL)sendServerMessage:(id)a0 command:(id)a1 fromAccount:(id)a2;
- (id)initWithService:(id)a0 commands:(id)a1 manuallyAckMessages:(BOOL)a2;
- (id)_accountWithAlias:(id)a0;
- (id)initWithService:(id)a0 serviceDomain:(id)a1;
- (id)initWithService:(id)a0 commands:(id)a1;
- (id)initWithService:(id)a0 manuallyAckMessages:(BOOL)a1;
- (void)deactivateAliases:(id)a0;
- (void)addDelegate:(id)a0 withDelegateProperties:(id)a1 queue:(id)a2;
- (void)setProtobufAction:(SEL)a0 forIncomingRequestsOfType:(unsigned short)a1;
- (void)setProtobufAction:(SEL)a0 forIncomingResponsesOfType:(unsigned short)a1;
- (SEL)protobufActionForIncomingRequestsOfType:(unsigned short)a0;
- (SEL)protobufActionForIncomingResponsesOfType:(unsigned short)a0;
- (BOOL)sendAheadGroup:(id)a0 priority:(long long)a1 options:(id)a2 identifier:(id *)a3 error:(id *)a4;
- (BOOL)sendMessage:(id)a0 fromAccount:(id)a1 toDestinations:(id)a2 options:(id)a3 identifier:(id *)a4 error:(id *)a5;
- (void)updateSubServices:(id)a0;
- (BOOL)sendResourceAtURL:(id)a0 metadata:(id)a1 toDestinations:(id)a2 priority:(long long)a3 options:(id)a4 identifier:(id *)a5 error:(id *)a6;
- (long long)maxHomeKitPayloadSize;
- (BOOL)sendMessage:(id)a0 toDestinations:(id)a1 priority:(long long)a2 options:(id)a3 identifier:(id *)a4 error:(id *)a5;
- (void)setPretendingToBeFull:(BOOL)a0;
- (void)scheduleTransactionLogTask:(id)a0;
- (id)internal;
- (id)linkedDeviceForFromID:(id)a0 withRelationship:(long long)a1;
- (BOOL)sendData:(id)a0 fromAccount:(id)a1 toDestinations:(id)a2 priority:(long long)a3 options:(id)a4 identifier:(id *)a5 error:(id *)a6;
- (id)initWithService:(id)a0;
- (BOOL)sendOpportunisticData:(id)a0 options:(id)a1 identifier:(id)a2 error:(id *)a3;
- (BOOL)cancelOpportunisticDataWithIdentifier:(id)a0 error:(id *)a1;
- (BOOL)sendProtobuf:(id)a0 fromAccount:(id)a1 toDestinations:(id)a2 priority:(long long)a3 options:(id)a4 identifier:(id *)a5 error:(id *)a6;
- (id)datagramConnectionForSessionDestination:(id)a0 uid:(unsigned int)a1 error:(id *)a2;
- (BOOL)sendData:(id)a0 priority:(long long)a1 options:(id)a2 identifier:(id *)a3 error:(id *)a4;
- (void)startOTRTest:(long long)a0;
- (void)sendAckForMessageWithContext:(id)a0;
- (BOOL)updateSubServices:(id)a0 forDevice:(id)a1;
- (id)activeAliases;
- (BOOL)cancelIdentifier:(id)a0 error:(id *)a1;
- (id)devicesForBTUUID:(id)a0;
- (id)deviceForUniqueID:(id)a0;
- (id)firstRoutableInternetDestinationForSelf;
- (BOOL)sendCertifiedDeliveryReceipt:(id)a0;
- (void)setPreferInfraWiFi:(BOOL)a0;
- (id)linkedDevicesWithRelationship:(long long)a0;
- (BOOL)isPretendingToBeFull;
- (id)serviceDomain;
- (id)datagramConnectionForSessionDestination:(id)a0 error:(id *)a1;
- (id)streamConnectionForSocketDescriptor:(int)a0 error:(id *)a1;
- (id)datagramChannelForSocketDescriptor:(int)a0 error:(id *)a1;

@end

@class NSArray, WiFiMACAddress, NSString, NSNumber;

@interface WiFiAwareDataSessionStatisticsReport : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL infraRelayOperationStatus;
@property (copy, nonatomic) NSNumber *infraRelayRequestersCount;
@property (readonly, nonatomic) WiFiMACAddress *peerAddress;
@property (readonly, nonatomic) NSNumber *infrastructureChannel;
@property (readonly, nonatomic) NSArray *txCCAHistogram;
@property (readonly, nonatomic) NSArray *rxRSSIHistogram;
@property (readonly, nonatomic) NSArray *rxFWDelayHistogram;
@property (readonly, nonatomic) NSArray *rxIPCDelayHistogram;
@property (readonly, nonatomic) NSArray *txConsecutiveErrorsHistogram;
@property (readonly, nonatomic) NSArray *txPacketExpiryHistogram;
@property (readonly, nonatomic) NSNumber *preferred2GChannelsCount;
@property (readonly, nonatomic) NSNumber *preferred5GChannelsCount;
@property (readonly, nonatomic) NSNumber *dfsChannelsCount;
@property (readonly, nonatomic) NSNumber *csaCount;
@property (readonly, nonatomic) NSNumber *quietIECount;
@property (readonly, nonatomic) NSNumber *txErrorCount;
@property (readonly, nonatomic) NSNumber *packetsOn2GCount;
@property (readonly, nonatomic) NSNumber *packetsNAVOn2GCount;
@property (readonly, nonatomic) NSNumber *packetsHOFOn2GCount;
@property (readonly, nonatomic) NSNumber *packetsOverridenOn5GCount;
@property (readonly, nonatomic) NSNumber *packetsOn5GCount;
@property (readonly, nonatomic) NSNumber *txExpiredCount;
@property (readonly, nonatomic) NSNumber *txNoACKCount;
@property (readonly, nonatomic) NSNumber *txFailedCount;
@property (readonly, nonatomic) NSNumber *txNoResourcesCount;
@property (readonly, nonatomic) NSNumber *txIOErrorCount;
@property (readonly, nonatomic) NSNumber *txMemoryErrorCount;
@property (readonly, nonatomic) NSNumber *txChipModeErrorCount;
@property (readonly, nonatomic) NSNumber *txNoRemotePeerCount;
@property (readonly, nonatomic) NSNumber *txInternalErrorCount;
@property (readonly, nonatomic) NSNumber *txDroppedCount;
@property (readonly, nonatomic) NSNumber *txFirmwareFreePacketCount;
@property (readonly, nonatomic) NSNumber *txMaxRetriesCount;
@property (readonly, nonatomic) NSNumber *txForceLifetimeExpiredCount;
@property (readonly, nonatomic) NSNumber *channelSequenceMismatchOn5GCount;
@property (readonly, nonatomic) NSNumber *channelSequenceMismatchOn2GCount;
@property (readonly, nonatomic) NSNumber *infraScanCount;
@property (readonly, nonatomic) NSNumber *infraAssocCount;
@property (readonly, nonatomic) NSNumber *infraDisassocCount;
@property (readonly, nonatomic) NSString *countryCode;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPeerAddress:(id)a0 infrastructureChannel:(id)a1 txCCAHistogram:(id)a2 rxRSSIHistogram:(id)a3 preferred2GChannelsCount:(id)a4 preferred5GChannelsCount:(id)a5 dfsChannelsCount:(id)a6 csaCount:(id)a7 quietIECount:(id)a8 txErrorCount:(id)a9 packetsOn2GCount:(id)a10 packetsNAVOn2GCount:(id)a11 packetsHOFOn2GCount:(id)a12 packetsOn5GCount:(id)a13 packetsOverridenOn5GCount:(id)a14 infraRelayOperationStatus:(BOOL)a15 infraRelayRequestersCount:(id)a16 txExpiredCount:(id)a17 txNoACKCount:(id)a18 txFailedCount:(id)a19 txNoResourcesCount:(id)a20 txIOErrorCount:(id)a21 txMemoryErrorCount:(id)a22 txChipModeErrorCount:(id)a23 txNoRemotePeerCount:(id)a24 txInternalErrorCount:(id)a25 txDroppedCount:(id)a26 txFirmwareFreePacketCount:(id)a27 txMaxRetriesCount:(id)a28 txForceLifetimeExpiredCount:(id)a29 channelSequenceMismatchOn5GCount:(id)a30 channelSequenceMismatchOn2GCount:(id)a31 infraScanCount:(id)a32 infraAssocCount:(id)a33 infraDisassocCount:(id)a34 countryCode:(id)a35 txConsecutiveErrorsHistogram:(id)a36 rxFWDelayHistogram:(id)a37 rxIPCDelayHistogram:(id)a38 txPacketExpiryHistogram:(id)a39;

@end

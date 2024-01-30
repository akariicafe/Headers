@class NSArray, WiFiMACAddress, NSString, NSNumber;

@interface WiFiAwareDataSessionStatisticsReport : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL infraRelayOperationStatus;
@property (copy, nonatomic) NSNumber *infraRelayRequestersCount;
@property (copy, nonatomic) NSNumber *preferred2GChannelsCount;
@property (copy, nonatomic) NSNumber *preferred5GChannelsCount;
@property (copy, nonatomic) NSNumber *dfsChannelsCount;
@property (copy, nonatomic) NSNumber *csaCount;
@property (copy, nonatomic) NSNumber *quietIECount;
@property (copy, nonatomic) NSNumber *txErrorCount;
@property (copy, nonatomic) NSNumber *packetsOn2GCount;
@property (copy, nonatomic) NSNumber *packetsNAVOn2GCount;
@property (copy, nonatomic) NSNumber *packetsHOFOn2GCount;
@property (copy, nonatomic) NSNumber *packetsOn5GCount;
@property (copy, nonatomic) NSNumber *packetsOverridenOn5GCount;
@property (copy, nonatomic) NSNumber *txExpiredCount;
@property (copy, nonatomic) NSNumber *txNoACKCount;
@property (copy, nonatomic) NSNumber *txFailedCount;
@property (copy, nonatomic) NSNumber *txNoResourcesCount;
@property (copy, nonatomic) NSNumber *txIOErrorCount;
@property (copy, nonatomic) NSNumber *txMemoryErrorCount;
@property (copy, nonatomic) NSNumber *txChipModeErrorCount;
@property (copy, nonatomic) NSNumber *txNoRemotePeerCount;
@property (copy, nonatomic) NSNumber *txInternalErrorCount;
@property (copy, nonatomic) NSNumber *txDroppedCount;
@property (copy, nonatomic) NSNumber *txFirmwareFreePacketCount;
@property (copy, nonatomic) NSNumber *txMaxRetriesCount;
@property (copy, nonatomic) NSNumber *txForceLifetimeExpiredCount;
@property (copy, nonatomic) NSNumber *channelSequenceMismatchOn5GCount;
@property (copy, nonatomic) NSNumber *channelSequenceMismatchOn2GCount;
@property (copy, nonatomic) NSNumber *infraScanCount;
@property (copy, nonatomic) NSNumber *infraAssocCount;
@property (copy, nonatomic) NSNumber *infraDisassocCount;
@property (copy, nonatomic) NSArray *txConsecutiveErrorsHistogram;
@property (copy, nonatomic) NSArray *rxFWDelayHistogram;
@property (copy, nonatomic) NSArray *rxIPCDelayHistogram;
@property (copy, nonatomic) NSArray *txPacketExpiryHistogram;
@property (copy, nonatomic) NSArray *txCCAHistogram;
@property (copy, nonatomic) NSArray *rxRSSIHistogram;
@property (readonly, nonatomic) WiFiMACAddress *peerAddress;
@property (readonly, nonatomic) NSNumber *infrastructureChannel;
@property (readonly, nonatomic) NSString *countryCode;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithPeerAddress:(id)a0 infrastructureChannel:(id)a1 txCCAHistogram:(id)a2 rxRSSIHistogram:(id)a3 preferred2GChannelsCount:(id)a4 preferred5GChannelsCount:(id)a5 dfsChannelsCount:(id)a6 csaCount:(id)a7 quietIECount:(id)a8 txErrorCount:(id)a9 packetsOn2GCount:(id)a10 packetsNAVOn2GCount:(id)a11 packetsHOFOn2GCount:(id)a12 packetsOn5GCount:(id)a13 packetsOverridenOn5GCount:(id)a14 infraRelayOperationStatus:(BOOL)a15 infraRelayRequestersCount:(id)a16 txExpiredCount:(id)a17 txNoACKCount:(id)a18 txFailedCount:(id)a19 txNoResourcesCount:(id)a20 txIOErrorCount:(id)a21 txMemoryErrorCount:(id)a22 txChipModeErrorCount:(id)a23 txNoRemotePeerCount:(id)a24 txInternalErrorCount:(id)a25 txDroppedCount:(id)a26 txFirmwareFreePacketCount:(id)a27 txMaxRetriesCount:(id)a28 txForceLifetimeExpiredCount:(id)a29 channelSequenceMismatchOn5GCount:(id)a30 channelSequenceMismatchOn2GCount:(id)a31 infraScanCount:(id)a32 infraAssocCount:(id)a33 infraDisassocCount:(id)a34 countryCode:(id)a35 txConsecutiveErrorsHistogram:(id)a36 rxFWDelayHistogram:(id)a37 rxIPCDelayHistogram:(id)a38 txPacketExpiryHistogram:(id)a39;

@end

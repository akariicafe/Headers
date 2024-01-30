@class NSString;

@interface CWFAWDLPeerAssistedDiscoveryParameters : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long localMasterChannel;
@property (nonatomic) unsigned long long localPreferredChannel;
@property (nonatomic) unsigned long long localSecondaryPreferredChannel;
@property (nonatomic) unsigned long long localAssistedDiscoveryMetric;
@property (copy, nonatomic) NSString *peerMACAddress;
@property (nonatomic) unsigned long long peerMasterChannel;
@property (nonatomic) unsigned long long peerPreferredChannel;
@property (nonatomic) unsigned long long peerSecondaryPreferredChannel;
@property (nonatomic) unsigned long long peerAssistedDiscoveryMetric;
@property (nonatomic) int peerSupportedChannelFlags;
@property (nonatomic) BOOL followMode;
@property (nonatomic) unsigned long long followModePreferredBand;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToAWDLParameters:(id)a0;

@end

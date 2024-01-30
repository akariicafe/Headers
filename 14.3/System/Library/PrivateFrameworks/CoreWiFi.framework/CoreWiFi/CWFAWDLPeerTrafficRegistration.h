@class NSString, NSArray;

@interface CWFAWDLPeerTrafficRegistration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *serviceName;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic) int sessionFlags;
@property (nonatomic) unsigned long long desiredBandwidth;
@property (nonatomic) unsigned long long desiredLatency;
@property (nonatomic) unsigned long long preferredChannel;
@property (nonatomic) unsigned long long secondaryPreferredChannel;
@property (copy, nonatomic) NSArray *peerContextList;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToAWDLPeerTrafficRegistration:(id)a0;

@end

@interface SFPrivacyProxyTraffic : NSObject <NSCopying>

@property (nonatomic) BOOL safariUnencrypted;
@property (nonatomic) BOOL safariDNS;
@property (nonatomic) BOOL safariTrackers;
@property (nonatomic) BOOL safariAll;
@property (nonatomic) BOOL safariHTTP;
@property (nonatomic) BOOL mailTrackers;
@property (nonatomic) BOOL anyUnencrypted;
@property (nonatomic) BOOL anyDNS;
@property (nonatomic) BOOL anyKnownTrackers;
@property (nonatomic) BOOL anyAppTrackers;
@property (nonatomic) BOOL newsURLResolution;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

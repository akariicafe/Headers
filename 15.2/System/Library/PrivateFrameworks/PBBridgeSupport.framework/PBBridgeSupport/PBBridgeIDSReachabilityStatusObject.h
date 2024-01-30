@class NSUUID;

@interface PBBridgeIDSReachabilityStatusObject : NSObject <NSCopying>

@property (retain, nonatomic) NSUUID *idsDeviceID;
@property (nonatomic) unsigned long long reachability;

+ (id)connectivityString:(unsigned long long)a0;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end

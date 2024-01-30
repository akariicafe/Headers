@class NSUUID;

@interface PBBridgeIDSReachabilityStatusObject : NSObject <NSCopying>

@property (retain, nonatomic) NSUUID *idsDeviceID;
@property (nonatomic) unsigned long long reachability;

+ (id)connectivityString:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end

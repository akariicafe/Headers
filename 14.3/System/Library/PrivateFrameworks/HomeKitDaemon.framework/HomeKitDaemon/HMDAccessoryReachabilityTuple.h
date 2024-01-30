@class NSString;

@interface HMDAccessoryReachabilityTuple : HMFObject

@property (retain, nonatomic) NSString *accessoryUUID;
@property (nonatomic) BOOL previouslySentReachability;
@property (nonatomic) BOOL currentReachability;

+ (id)tupleWithAccessoryUUID:(id)a0 reachable:(BOOL)a1;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end

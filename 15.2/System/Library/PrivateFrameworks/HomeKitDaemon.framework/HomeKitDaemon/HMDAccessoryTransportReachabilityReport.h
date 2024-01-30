@class NSString, NSDate;

@interface HMDAccessoryTransportReachabilityReport : HMFObject

@property (readonly, nonatomic) BOOL reachable;
@property (readonly, nonatomic) NSDate *reachableLastChangedTime;
@property (copy, nonatomic) NSString *reason;
@property (readonly, nonatomic) BOOL hasAdvertisement;
@property (readonly, copy, nonatomic) NSString *linkType;
@property (readonly, copy, nonatomic) NSString *protocol;
@property (readonly, copy, nonatomic) NSString *protocolVersion;

- (void).cxx_destruct;
- (id)initWithLinkType:(id)a0 hasAdvertisement:(BOOL)a1 protocol:(id)a2 protocolVersion:(id)a3 reachable:(BOOL)a4 reachableLastChangedTime:(id)a5 reason:(id)a6;

@end

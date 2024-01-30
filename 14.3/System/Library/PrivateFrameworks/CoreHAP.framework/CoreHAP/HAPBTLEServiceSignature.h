@class NSUUID, NSNumber, NSArray;

@interface HAPBTLEServiceSignature : HMFObject

@property (readonly, copy, nonatomic) NSUUID *serviceType;
@property (readonly, copy, nonatomic) NSNumber *serviceInstanceID;
@property (readonly, nonatomic) unsigned long long serviceProperties;
@property (readonly, nonatomic) NSArray *linkedServices;
@property (readonly, nonatomic, getter=isAuthenticated) BOOL authenticated;

- (void).cxx_destruct;
- (id)description;
- (id)initWithServiceType:(id)a0 serviceInstanceID:(id)a1 serviceProperties:(unsigned long long)a2 linkedServices:(id)a3 authenticated:(BOOL)a4;

@end

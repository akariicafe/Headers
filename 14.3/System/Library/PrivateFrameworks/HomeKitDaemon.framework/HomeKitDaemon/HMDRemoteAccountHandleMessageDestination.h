@class NSDictionary, HMDAccountHandle;

@interface HMDRemoteAccountHandleMessageDestination : HMDRemoteMessageDestination

@property (readonly, copy) HMDAccountHandle *handle;
@property (readonly, getter=isMulticast) BOOL multicast;
@property (readonly, copy) NSDictionary *deviceCapabilities;

+ (id)shortDescription;

- (id)initWithTarget:(id)a0;
- (id)descriptionWithPointer:(BOOL)a0;
- (void).cxx_destruct;
- (id)shortDescription;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (id)remoteDestinationString;
- (id)initWithTarget:(id)a0 handle:(id)a1 multicast:(BOOL)a2;
- (id)initWithTarget:(id)a0 handle:(id)a1 multicast:(BOOL)a2 deviceCapabilities:(id)a3;

@end

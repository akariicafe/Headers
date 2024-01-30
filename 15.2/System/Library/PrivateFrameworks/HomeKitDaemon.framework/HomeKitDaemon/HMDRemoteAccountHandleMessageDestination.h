@class NSDictionary, HMDAccountHandle;

@interface HMDRemoteAccountHandleMessageDestination : HMDRemoteMessageDestination

@property (readonly, copy) HMDAccountHandle *handle;
@property (readonly, getter=isMulticast) BOOL multicast;
@property BOOL restrictToResidentCapable;
@property (readonly, copy) NSDictionary *deviceCapabilities;

+ (id)shortDescription;

- (id)descriptionWithPointer:(BOOL)a0;
- (id)shortDescription;
- (id)description;
- (id)initWithTarget:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)remoteDestinationString;
- (id)initWithTarget:(id)a0 handle:(id)a1 multicast:(BOOL)a2;
- (id)initWithTarget:(id)a0 handle:(id)a1 multicast:(BOOL)a2 deviceCapabilities:(id)a3;

@end

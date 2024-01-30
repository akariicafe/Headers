@class NSUUID, HMFMessageDestination, NSDictionary;

@interface HMDIDSMessageContext : HMFObject

@property (readonly, copy) NSUUID *identifier;
@property (readonly) HMFMessageDestination *destination;
@property (readonly, copy) NSDictionary *userInfo;

- (void).cxx_destruct;
- (id)init;
- (id)initWithIdentifier:(id)a0 destination:(id)a1 userInfo:(id)a2;

@end

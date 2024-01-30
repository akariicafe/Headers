@class NSUUID;

@interface HMDAccessoryReachabilityElectionParameter : HMFObject

@property (readonly, copy) NSUUID *identifier;
@property (readonly, getter=isReachable) BOOL reachable;

- (id)initWithDictionaryRepresentation:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end

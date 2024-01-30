@class NSUUID;

@interface HMDAccessoryReachabilityElectionParameter : HMFObject

@property (readonly, copy) NSUUID *identifier;
@property (readonly, getter=isReachable) BOOL reachable;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end

@class CLLocation;

@interface HMDLocationTuple : HMFObject

@property (readonly, copy) CLLocation *location;
@property (readonly) unsigned long long reachableIPAccessoryCount;
@property (readonly) unsigned long long reachableBTLEAccessoryCount;
@property (readonly) unsigned long long reachableMediaAccessoryCount;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithLocation:(id)a0 reachableIPAccessoryCount:(unsigned long long)a1 reachableBTLEAccessoryCount:(unsigned long long)a2 reachableMediaAccessoryCount:(unsigned long long)a3;

@end

@class CLLocation, NSMutableArray;

@interface HMDLocationClusterGroup : HMFObject

@property (readonly, copy) CLLocation *center;
@property (readonly) NSMutableArray *locations;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithCenter:(id)a0;

@end

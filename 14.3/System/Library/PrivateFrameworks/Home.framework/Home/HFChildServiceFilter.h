@class NSSet;

@interface HFChildServiceFilter : NSObject

@property (readonly, copy, nonatomic) NSSet *childServiceTypes;

- (id)filteredChildServicesForParentService:(id)a0;
- (void).cxx_destruct;
- (id)initWithChildServiceTypes:(id)a0;

@end

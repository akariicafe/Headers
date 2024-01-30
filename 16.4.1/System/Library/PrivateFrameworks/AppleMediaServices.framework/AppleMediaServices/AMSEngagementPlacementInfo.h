@class NSDictionary, NSString;

@interface AMSEngagementPlacementInfo : NSObject

@property (readonly, nonatomic) NSDictionary *context;
@property (readonly, nonatomic) NSString *placement;

- (id)initWithPlacement:(id)a0 context:(id)a1;
- (id)makeRawDictionary;
- (void).cxx_destruct;

@end

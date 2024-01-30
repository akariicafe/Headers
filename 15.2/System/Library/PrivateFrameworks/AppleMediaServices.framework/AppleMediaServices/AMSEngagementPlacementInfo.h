@class NSDictionary, NSString;

@interface AMSEngagementPlacementInfo : NSObject

@property (readonly, nonatomic) NSDictionary *context;
@property (readonly, nonatomic) NSString *placement;

- (void).cxx_destruct;
- (id)makeRawDictionary;
- (id)initWithPlacement:(id)a0 context:(id)a1;

@end

@class NSMutableArray;

@interface WFActionDonationSet : NSObject

@property (readonly, nonatomic) NSMutableArray *predictedActions;
@property (readonly, nonatomic) NSMutableArray *recentActions;
@property (readonly, nonatomic) NSMutableArray *appSuggestedActions;

- (id)init;
- (void).cxx_destruct;

@end

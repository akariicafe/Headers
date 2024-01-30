@class NSMutableArray;

@interface WFActionDonationSet : NSObject

@property (readonly, nonatomic) NSMutableArray *predictedActions;
@property (readonly, nonatomic) NSMutableArray *recentActions;
@property (readonly, nonatomic) NSMutableArray *appSuggestedActions;

- (void).cxx_destruct;
- (id)init;

@end

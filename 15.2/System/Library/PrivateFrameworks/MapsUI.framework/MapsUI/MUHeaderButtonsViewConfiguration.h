@class NSArray;
@protocol MUHeaderButtonMenuActionProvider;

@interface MUHeaderButtonsViewConfiguration : NSObject

@property (nonatomic) double detourTime;
@property (nonatomic) BOOL showMoreButton;
@property (weak, nonatomic) id<MUHeaderButtonMenuActionProvider> menuProvider;
@property (copy, nonatomic) NSArray *possibleAnalyticActions;

- (void).cxx_destruct;

@end

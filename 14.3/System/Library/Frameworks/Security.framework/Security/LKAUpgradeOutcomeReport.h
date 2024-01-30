@class NSDictionary;

@interface LKAUpgradeOutcomeReport : NSObject

@property int outcome;
@property (retain) NSDictionary *attributes;

- (void).cxx_destruct;
- (id)initWithOutcome:(int)a0 attributes:(id)a1;

@end

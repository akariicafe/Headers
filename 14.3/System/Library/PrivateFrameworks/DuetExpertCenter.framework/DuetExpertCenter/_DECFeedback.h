@class NSArray, _DECLaunchInfo, _DECPrediction, _DECItem;

@interface _DECFeedback : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _DECItem *itemSelected;
@property (retain, nonatomic) _DECLaunchInfo *launchInfo;
@property (retain, nonatomic) NSArray *itemsShown;
@property (retain, nonatomic) _DECPrediction *prediction;

+ (id)feedbackWithItemSelected:(id)a0 launchInfo:(id)a1 itemsShown:(id)a2 prediction:(id)a3;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithItemSelected:(id)a0 launchInfo:(id)a1 itemsShown:(id)a2 prediction:(id)a3;
- (BOOL)relevantLaunch;
- (id)predictedItemsShown;
- (unsigned long long)outcomeForCategory:(unsigned long long)a0 predictions:(id)a1;
- (unsigned long long)outcomeForCategory:(unsigned long long)a0;
- (unsigned long long)outcomeForCategory:(unsigned long long)a0 predictionItem:(id)a1;

@end

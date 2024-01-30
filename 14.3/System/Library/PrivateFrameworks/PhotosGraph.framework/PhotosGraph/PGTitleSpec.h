@class NSArray, NSString;
@protocol PGTitleSpecDelegate;

@interface PGTitleSpec : NSObject

@property (retain) NSArray *arguments;
@property BOOL hasLineBreak;
@property BOOL insertNonBreakableSpace;
@property BOOL hasSpecArgumentHandlingLineBreakBehavior;
@property unsigned long long weekdayCriteria;
@property (readonly) NSString *format;
@property (readonly) long long titleCategory;
@property (weak) id<PGTitleSpecDelegate> delegate;

+ (long long)_weekdayForWeekdayCriteria:(unsigned long long)a0;
+ (id)specWithFormat:(id)a0 titleCategory:(long long)a1;

- (void).cxx_destruct;
- (id)description;
- (id)initWithFormat:(id)a0 titleCategory:(long long)a1;
- (id)titleWithMomentNodes:(id)a0;
- (id)titleWithMomentNodes:(id)a0 features:(id)a1;
- (id)_titleWithResolvedArguments:(id)a0;
- (BOOL)_resolveRequiredInputForArgument:(id)a0;
- (id)_appendArguments:(id)a0 toFormatString:(id)a1;
- (BOOL)_canFulfillWeekdayCriteriaWithMomentNodes:(id)a0;

@end

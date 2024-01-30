@class NSUUID, NSArray, CARObserverHashTable, NSString, UIImage, CAFilter;
@protocol DBSmartWidgetPredictionDelegate;

@interface DBSmartWidgetPrediction : NSObject

@property (retain, nonatomic) CARObserverHashTable *observers;
@property (weak, nonatomic) id<DBSmartWidgetPredictionDelegate> delegate;
@property (copy, nonatomic) NSUUID *uniqueIdentifier;
@property (retain, nonatomic) NSArray *validRanges;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) CAFilter *compositingFilter;
@property (readonly, nonatomic) BOOL showImageBorder;
@property (readonly, copy, nonatomic) id /* block */ actionBlock;
@property (readonly, nonatomic) long long score;
@property (readonly, nonatomic) long long tieBreakScore;

+ (long long)_scoreFor:(double)a0 minValue:(double)a1 maxValue:(double)a2;
+ (double)initialValidInterval;
+ (SEL)isEqualClassSelector;

- (void)addObserver:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)removeObserver:(id)a0;
- (long long)compare:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (double)minValue;
- (id)description;
- (void).cxx_destruct;
- (double)maxValue;
- (long long)predictionScore;
- (BOOL)isEqualToPrediction:(id)a0;
- (id)_debugScoreText;
- (BOOL)_defaultIsEqualClass:(id)a0;
- (id)debugScoreText;
- (id)debugValidRangesText;
- (id)defaultValidRanges;
- (double)initialValidInterval;
- (void)invalidateValidIntervals;
- (id)predictedObjectDescription;
- (void)predictionDidUpdate;
- (void)updateRangeIfNeeded:(id)a0;
- (BOOL)updateWithPrediction:(id)a0;

@end

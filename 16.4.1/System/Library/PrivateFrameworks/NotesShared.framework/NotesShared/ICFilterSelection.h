@class NSSet, NSArray, NSString;

@interface ICFilterSelection : NSObject <NSCopying>

@property (class, readonly, nonatomic) NSSet *cloudSpecificFilterTypes;

@property (readonly, nonatomic) NSArray *emptyFilterTypeSelections;
@property (readonly, nonatomic) NSArray *invalidFilterTypeSelectionCombinations;
@property (readonly, nonatomic) NSArray *incompatibleLockedNotesFilterTypeSelections;
@property (nonatomic) unsigned long long joinOperator;
@property (retain, nonatomic) NSArray *filterTypeSelections;
@property (nonatomic) BOOL includeRecentlyDeleted;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL hasEmptySelection;
@property (readonly, nonatomic) NSString *emptySummaryTitle;
@property (readonly, nonatomic) NSString *emptySummary;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) NSString *invalidSummaryTitle;
@property (readonly, nonatomic) NSString *invalidSummary;
@property (readonly, copy, nonatomic) NSString *primaryDateSummary;
@property (readonly, copy, nonatomic) NSString *secondaryDateSummary;
@property (readonly, copy, nonatomic) NSString *summaryWithJoinOperatorMenu;

+ (id)keyPathsForValuesAffectingHasEmptySelection;
+ (id)keyPathsForValuesAffectingIsEmpty;
+ (id)keyPathsForValuesAffectingIsValid;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)filterTypeSelectionForFilterType:(long long)a0;
- (id)initWithFilterTypeSelection:(id)a0;
- (id)initWithFilterTypeSelections:(id)a0 joinOperator:(unsigned long long)a1;
- (BOOL)isEqualToICFilterSelection:(id)a0;
- (void)setSelection:(id)a0 forFilterType:(long long)a1;

@end

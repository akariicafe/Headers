@class NSArray;

@interface SPSearchSuggestion : SFSearchSuggestion

@property unsigned long long queryLen;
@property unsigned long long queryFragmentCount;
@property unsigned long long queryCompletionCount;
@property unsigned long long fragments;
@property double age;
@property double prob;
@property unsigned long long maxscore;
@property int weight;
@property int parentWeight;
@property int rootWeight;
@property double phraseScore;
@property double punishment;
@property double compositeScore;
@property int completionType;
@property int prefixLen;
@property float fieldWeight;
@property BOOL isSingleThread;
@property BOOL hasUsedDate;
@property BOOL isShortcut;
@property BOOL hasMultipleResults;
@property (retain) NSArray *bundleIDs;
@property (readonly, nonatomic) NSArray *searchEntities;

+ (id)suggestionsWithData:(id)a0 queryString:(id)a1;

- (id)suggestion;
- (id)query;
- (void).cxx_destruct;
- (Class)classForKeyedArchiver;
- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSuggestion:(id)a0 query:(id)a1 scores:(id)a2 bundleIDs:(id)a3;
- (id)suggestionsFeedbackData;

@end

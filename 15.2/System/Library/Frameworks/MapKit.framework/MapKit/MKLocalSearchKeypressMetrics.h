@class NSString, NSArray;

@interface MKLocalSearchKeypressMetrics : NSObject

@property (readonly, copy, nonatomic) NSString *query;
@property (readonly, copy, nonatomic) NSArray *queryTokens;
@property (readonly, nonatomic) NSArray *suggestionEntries;

- (void)submitWithStatus:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithQuery:(id)a0 queryTokens:(id)a1 suggestionEntries:(id)a2;

@end

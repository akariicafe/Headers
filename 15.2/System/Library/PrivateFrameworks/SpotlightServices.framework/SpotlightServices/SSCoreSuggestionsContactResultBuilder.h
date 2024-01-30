@class NSString;

@interface SSCoreSuggestionsContactResultBuilder : SSContactResultBuilder

@property (retain, nonatomic) NSString *suggestedContactIdentifier;

+ (id)bundleId;
+ (BOOL)supportsResult:(id)a0;

- (id)initWithResult:(id)a0;
- (void).cxx_destruct;
- (id)buildCommand;
- (BOOL)scopesSearchOnEngagement;

@end

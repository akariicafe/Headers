@class _PSEnsembleModel;

@interface _PSSuggesterConfiguration : NSObject

@property (class, readonly, copy) _PSSuggesterConfiguration *defaultConfiguration;

@property (nonatomic) long long maximumNumberOfSuggestions;
@property (retain, nonatomic) _PSEnsembleModel *suggestionModel;

- (void).cxx_destruct;
- (id)description;

@end

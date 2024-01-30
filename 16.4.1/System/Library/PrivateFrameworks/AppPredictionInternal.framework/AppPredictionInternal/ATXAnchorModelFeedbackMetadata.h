@class NSMutableDictionary;

@interface ATXAnchorModelFeedbackMetadata : NSObject <NSSecureCoding> {
    NSMutableDictionary *_suggestionUUIDToAnchorPredictionMapping;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)anchorFeedbackMetadataFromArchivedData:(id)a0;
+ (id)archivedDataForAnchorFeedbackMetadata:(id)a0;

- (id)anchorModelPredictionForProactiveSuggestion:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)numberOfAnchorModelPredictions;
- (id)initWithSuggestionUUIDToAnchorPredictionMapping:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToATXAnchorModelFeedbackMetadata:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAnchorSuggestionTuples:(id)a0;
- (void).cxx_destruct;

@end

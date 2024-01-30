@class NSMutableDictionary;

@interface ATXAnchorModelFeedbackMetadata : NSObject <NSSecureCoding> {
    NSMutableDictionary *_suggestionUUIDToAnchorPredictionMapping;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)archivedDataForAnchorFeedbackMetadata:(id)a0;
+ (id)anchorFeedbackMetadataFromArchivedData:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAnchorSuggestionTuples:(id)a0;
- (unsigned long long)numberOfAnchorModelPredictions;
- (id)anchorModelPredictionForProactiveSuggestion:(id)a0;
- (id)initWithSuggestionUUIDToAnchorPredictionMapping:(id)a0;
- (BOOL)isEqualToATXAnchorModelFeedbackMetadata:(id)a0;

@end

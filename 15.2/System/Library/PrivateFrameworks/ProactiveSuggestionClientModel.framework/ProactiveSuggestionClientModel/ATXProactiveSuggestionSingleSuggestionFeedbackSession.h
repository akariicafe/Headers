@class NSMutableDictionary, NSData, NSMutableOrderedSet, ATXProactiveSuggestion;

@interface ATXProactiveSuggestionSingleSuggestionFeedbackSession : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ATXProactiveSuggestion *suggestion;
@property (readonly, nonatomic) NSData *feedbackMetadata;
@property (readonly, nonatomic) NSMutableOrderedSet *matchingSuggestionUUIDs;
@property (readonly, nonatomic) NSMutableOrderedSet *associatedClientModelCacheUUIDs;
@property (readonly, nonatomic) NSMutableOrderedSet *associatedBlendingCacheUUIDs;
@property (readonly, nonatomic) NSMutableDictionary *sessionContextStatusByConsumerSubType;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithProactiveSuggestion:(id)a0 feedbackMetadata:(id)a1 matchingSuggestionUUIDs:(id)a2 associatedBlendingCacheUUIDs:(id)a3 associatedClientModelCacheUUIDs:(id)a4 sessionContextStatuses:(id)a5;
- (BOOL)isEqualToATXProactiveSuggestionSingleSuggestionFeedbackSession:(id)a0;
- (id)initWithProactiveSuggestion:(id)a0 clientModelCacheUUID:(id)a1 feedbackMetadata:(id)a2;
- (BOOL)tryUpdateEngagementType:(long long)a0 consumerSubType:(unsigned char)a1;
- (void)enumerateShownAndEngagedEngagementTypesAndConsumerSubTypesWithBlock:(id /* block */)a0;

@end

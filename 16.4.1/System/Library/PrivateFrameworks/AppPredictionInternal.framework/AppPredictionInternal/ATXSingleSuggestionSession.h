@class NSMutableDictionary, NSData, NSMutableOrderedSet, ATXProactiveSuggestion, NSDate;

@interface ATXSingleSuggestionSession : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) ATXProactiveSuggestion *suggestion;
@property (retain, nonatomic) NSData *feedbackMetadata;
@property (retain, nonatomic) NSMutableOrderedSet *matchingSuggestionUUIDs;
@property (retain, nonatomic) NSMutableOrderedSet *associatedClientModelCacheUUIDs;
@property (retain, nonatomic) NSMutableOrderedSet *associatedBlendingCacheUUIDs;
@property (retain, nonatomic) NSMutableDictionary *sessionContextStatusByConsumerSubType;
@property (retain, nonatomic) NSDate *sessionExpirationDate;
@property (nonatomic) BOOL completed;

+ (id)stringForSuggestionSessionStatus:(unsigned long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (void)enumerateShownAndEngagedSessionStatusesAndConsumerSubTypesWithBlock:(id /* block */)a0;
- (id)initWithTrackedProactiveSuggestion:(id)a0 clientModelCacheUUID:(id)a1 feedbackMetadata:(id)a2;
- (id)initWithTrackedProactiveSuggestion:(id)a0 feedbackMetadata:(id)a1 matchingSuggestionUUIDs:(id)a2 associatedBlendingCacheUUIDs:(id)a3 associatedClientModelCacheUUIDs:(id)a4 sessionContextStatuses:(id)a5 sessionExpirationDate:(id)a6 completed:(BOOL)a7;
- (BOOL)isEqualToATXSingleSuggestionSession:(id)a0;
- (BOOL)tryUpdateSessionStatus:(unsigned long long)a0 consumerSubType:(unsigned char)a1;

@end

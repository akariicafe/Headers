@class NSUUID, NSString, NSDate, NSOrderedSet, ATXAction, NSObject, NSMutableOrderedSet, NSNumber;
@protocol NSSecureCoding;

@interface ATXFeedbackSession : NSObject <NSSecureCoding> {
    NSMutableOrderedSet *_engagedUUIDs;
    NSMutableOrderedSet *_rejectedUUIDs;
    NSMutableOrderedSet *_shownUUIDs;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *partiallyExecutedUUID;
@property (readonly, nonatomic) ATXAction *partiallyExecutedAction;
@property (readonly, nonatomic) ATXAction *matchingIntentDonatedAction;
@property (readonly, nonatomic) NSDate *partiallyExecutedActionStartDate;
@property (readonly, nonatomic) NSDate *matchingIntentDonationDate;
@property (readonly, nonatomic) NSNumber *partialEngagementWasCompleteMatch;
@property (readonly, nonatomic) NSString *sessionIdentifier;
@property (readonly, nonatomic) NSUUID *blendingUICacheUpdateUUID;
@property (readonly, nonatomic) unsigned char consumerSubType;
@property (readonly, nonatomic) NSDate *sessionStartDate;
@property (readonly, nonatomic) NSDate *sessionEndDate;
@property (readonly, nonatomic) NSOrderedSet *engagedUUIDs;
@property (readonly, nonatomic) NSOrderedSet *rejectedUUIDs;
@property (readonly, nonatomic) NSOrderedSet *shownUUIDs;
@property (readonly, nonatomic) NSObject<NSSecureCoding> *sessionMetadata;
@property (readonly, nonatomic) BOOL developerModeEnabled;
@property (readonly, nonatomic) BOOL demoModeEnabled;

- (BOOL)isEqualToATXFeedbackSession:(id)a0;
- (void).cxx_destruct;
- (unsigned char)uiConsumerSubTypeForFeedback;
- (id)initWithSessionIdentifier:(id)a0 consumerSubType:(unsigned char)a1 sessionStartDate:(id)a2;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithSessionIdentifier:(id)a0 consumerSubType:(unsigned char)a1 sessionStartDate:(id)a2 sessionEndDate:(id)a3 blendingUICacheUpdateUUID:(id)a4 engagedUUIDs:(id)a5 rejectedUUIDs:(id)a6 shownUUIDs:(id)a7 sessionMetadata:(id)a8 partiallyExecutedUUID:(id)a9 partiallyExecutedAction:(id)a10 matchingIntentDonatedAction:(id)a11 partiallyExecutedActionStartDate:(id)a12 matchingIntentDonationDate:(id)a13 partialEngagementWasCompleteMatch:(id)a14;
- (unsigned long long)hash;
- (void)updateEngagedUUIDs:(id)a0 rejectedUUIDs:(id)a1 shownUUIDs:(id)a2;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)updatePartiallyExecutedActionWithProactiveSuggestion:(id)a0 engagementDate:(id)a1;
- (void)updateSessionMetadata:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)spotlightSessionMetadata;
- (void)updateBlendingUICacheUpdateUUIDIfUnset:(id)a0;
- (void)finalizeWithSessionEndDate:(id)a0;
- (void)markPartiallyExecutedSuggestionAsPartialMatchWithDonatedAction:(id)a0 donationDate:(id)a1;
- (id)homeScreenSessionMetadata;
- (void)markPartiallyExecutedSuggestionAsCompleteMatchWithDonatedAction:(id)a0 donationDate:(id)a1;
- (void)markPartiallyExecutedSuggestionAsAbandoned;
- (void)encodeWithCoder:(id)a0;

@end

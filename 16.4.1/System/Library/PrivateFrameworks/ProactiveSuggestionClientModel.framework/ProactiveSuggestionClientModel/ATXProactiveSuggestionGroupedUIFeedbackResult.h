@class ATXPBProactiveSuggestionGroupedUIFeedbackResult, NSDate;

@interface ATXProactiveSuggestionGroupedUIFeedbackResult : NSObject <NSSecureCoding, ATXProtoBufWrapper> {
    ATXPBProactiveSuggestionGroupedUIFeedbackResult *_proto;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long numSessionsWithEngagedSuggestions;
@property (readonly, nonatomic) unsigned long long numSessionsWithRejectedSuggestions;
@property (readonly, nonatomic) unsigned long long numSessionsWithAbandonedSuggestions;
@property (readonly, nonatomic) unsigned long long numEngagedSuggestions;
@property (readonly, nonatomic) unsigned long long numRejectedSuggestions;
@property (readonly, nonatomic) unsigned long long numAbandonedSuggestions;
@property (nonatomic) BOOL isGroupSessionComplete;
@property (readonly, nonatomic) NSDate *startDateOfFirstSession;
@property (readonly, nonatomic) NSDate *endDateOfLastSession;

- (id)initWithProto:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)encodeAsProto;
- (id)jsonDict;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqualToATXProactiveSuggestionGroupedUIFeedbackResult:(id)a0;
- (void)updateWithIntermediateSessionResults:(id)a0;

@end

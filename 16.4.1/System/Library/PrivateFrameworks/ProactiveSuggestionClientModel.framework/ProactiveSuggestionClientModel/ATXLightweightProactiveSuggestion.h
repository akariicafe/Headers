@class NSString, ATXProactiveSuggestionScoreSpecification;

@interface ATXLightweightProactiveSuggestion : NSObject <ATXProtoBufWrapper>

@property (readonly, nonatomic) NSString *executableIdentifier;
@property (readonly, nonatomic) long long executableType;
@property (readonly, nonatomic) ATXProactiveSuggestionScoreSpecification *scoreSpecification;
@property (readonly, nonatomic) unsigned long long predictionReasons;
@property (nonatomic) unsigned char consumerSubType;

+ (id)protoLightWeightSuggestionsFromLightWeightSuggestions:(id)a0;
+ (id)lightWeightSuggestionDescriptionsFromLightWeightSuggestions:(id)a0;
+ (id)lightWeightSuggestionsFromProtoLightWeightSuggestions:(id)a0;
+ (id)lightWeightSuggestionsFromSuggestions:(id)a0;

- (id)initWithProto:(id)a0;
- (id)encodeAsProto;
- (id)initWithProactiveSuggestion:(id)a0;
- (BOOL)isEqualToATXLightweightProactiveSuggestion:(id)a0;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithExecutableIdentifier:(id)a0 executableType:(long long)a1 scoreSpecification:(id)a2 predictionReasons:(unsigned long long)a3;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end

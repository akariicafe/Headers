@class NSString;

@interface ATXLightweightProactiveSuggestion : NSObject <ATXProtoBufWrapper>

@property (readonly, nonatomic) NSString *executableIdentifier;
@property (readonly, nonatomic) long long executableType;
@property (nonatomic) unsigned char consumerSubType;

+ (id)protoLightWeightSuggestionsFromLightWeightSuggestions:(id)a0;
+ (id)lightWeightSuggestionDescriptionsFromLightWeightSuggestions:(id)a0;
+ (id)lightWeightSuggestionsFromSuggestions:(id)a0;
+ (id)lightWeightSuggestionsFromProtoLightWeightSuggestions:(id)a0;

- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)description;
- (id)initWithExecutableIdentifier:(id)a0 executableType:(long long)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)proto;
- (BOOL)isEqualToATXLightweightProactiveSuggestion:(id)a0;
- (id)encodeAsProto;
- (id)initWithProactiveSuggestion:(id)a0;

@end

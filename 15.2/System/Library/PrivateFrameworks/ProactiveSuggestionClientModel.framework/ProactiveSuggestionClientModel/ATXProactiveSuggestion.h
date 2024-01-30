@class NSUUID, NSString, NSDate, ATXInfoSuggestion, ATXProactiveSuggestionUISpecification, ATXProactiveSuggestionClientModelSpecification, NSDictionary, ATXProactiveSuggestionExecutableSpecification, ATXProactiveSuggestionScoreSpecification, INIntent;

@interface ATXProactiveSuggestion : NSObject <NSSecureCoding, ATXProtoBufWrapper, NSCopying> {
    unsigned long long _hash;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *appBundleIdentifier;
@property (readonly, nonatomic) NSString *widgetBundleIdentifier;
@property (readonly, nonatomic) NSString *criterion;
@property (readonly, nonatomic) unsigned long long applicableLayouts;
@property (readonly, nonatomic) NSString *suggestionIdentifier;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) INIntent *intent;
@property (readonly, nonatomic) NSDictionary *metadata;
@property (retain, nonatomic) ATXInfoSuggestion *infoSuggestion;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) ATXProactiveSuggestionClientModelSpecification *clientModelSpecification;
@property (readonly, nonatomic) ATXProactiveSuggestionExecutableSpecification *executableSpecification;
@property (readonly, nonatomic) ATXProactiveSuggestionUISpecification *uiSpecification;
@property (readonly, nonatomic) ATXProactiveSuggestionScoreSpecification *scoreSpecification;

+ (id)suggestionsFromProtoSuggestions:(id)a0;
+ (id)protoSuggestionsFromSuggestions:(id)a0;
+ (BOOL)suggestionsHaveChangedFromPreviousSuggestions:(id)a0 newSuggestions:(id)a1;

- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithProto:(id)a0;
- (id)jsonRawData;
- (void)encodeWithCoder:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)encodeAsProto;
- (BOOL)isValidForSuggestionsWidget;
- (id)initWithClientModelSpecification:(id)a0 executableSpecification:(id)a1 uiSpecification:(id)a2 scoreSpecification:(id)a3;
- (id)initWithClientModelSpecification:(id)a0 executableSpecification:(id)a1 uiSpecification:(id)a2 scoreSpecification:(id)a3 uuid:(id)a4;
- (BOOL)fuzzyIsEqualToProactiveSuggestion:(id)a0;

@end

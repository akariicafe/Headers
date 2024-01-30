@class SFTopic, ATXActionCriteria, NSString;

@interface ATXSpotlightAction : NSObject <NSSecureCoding, ATXSuggestionExecutableProtocol> {
    ATXActionCriteria *_criteria;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) SFTopic *topic;
@property (readonly, nonatomic) ATXActionCriteria *criteria;
@property (readonly, nonatomic) NSString *actionIdentifier;
@property (readonly, nonatomic) NSString *actionDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_contactSuggestionResultWithId:(id)a0 title:(id)a1;
+ (id)_searchSuggestionResultWithString:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)init;
- (id)initWithSearchString:(id)a0;
- (void).cxx_destruct;
- (id)initWithContactName:(id)a0 contactEmail:(id)a1 subtitle:(id)a2 criteria:(id)a3;
- (id)initWithContactName:(id)a0 contactIdentifier:(id)a1 subtitle:(id)a2 criteria:(id)a3;
- (id)initWithFlightCode:(id)a0 date:(id)a1 criteria:(id)a2;
- (id)initWithMediaName:(id)a0 identifier:(id)a1 criteria:(id)a2;
- (id)initWithPOIName:(id)a0 muid:(id)a1 criteria:(id)a2;
- (id)initWithTopic:(id)a0 criteria:(id)a1 actionDescription:(id)a2 actionIdentifier:(id)a3;
- (id)initWithWeatherLocation:(id)a0 latitude:(double)a1 longitude:(double)a2 criteria:(id)a3;

@end

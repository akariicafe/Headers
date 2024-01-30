@class NSString, NSArray, NSDate, ATXSpotlightEventMetadata;

@interface ATXSpotlightEvent : NSObject <NSSecureCoding, ATXProtoBufWrapper> {
    double _absoluteDate;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *date;
@property (nonatomic) int eventType;
@property (retain, nonatomic) NSString *appConsumerSubType;
@property (retain, nonatomic) NSString *actionConsumerSubType;
@property (retain, nonatomic) NSString *appBlendingCacheId;
@property (retain, nonatomic) NSString *actionBlendingCacheId;
@property (retain, nonatomic) NSArray *appSuggestionIds;
@property (retain, nonatomic) NSArray *actionSuggestionIds;
@property (retain, nonatomic) ATXSpotlightEventMetadata *metadata;

+ (id)viewAppearedEventWithSFFeedback:(id)a0;
+ (id)viewDisappearedEventWithDidSearch:(BOOL)a0;
+ (id)suggestionsAppearedEventWithAppSuggestionIds:(id)a0 actionSuggestionIds:(id)a1 appBlendingCacheId:(id)a2 actionBlendingCacheId:(id)a3;
+ (id)appSuggestionTappedEventWithSuggestionId:(id)a0 appBlendingCacheId:(id)a1 currentQuery:(id)a2;
+ (id)actionSuggestionTappedEventWithSuggestionId:(id)a0 actionBlendingCacheId:(id)a1 currentQuery:(id)a2;
+ (id)searchResultTappedWithEngagedBundleId:(id)a0 searchedActionType:(unsigned long long)a1;
+ (id)actionSuggestionDismissedEventWithSuggestionId:(id)a0 actionBlendingCacheId:(id)a1;
+ (id)actionSuggestionContextMenuDismissOnceEventWithSuggestionId:(id)a0 actionBlendingCacheId:(id)a1;

- (void).cxx_destruct;
- (id)initWithProtoData:(id)a0;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (BOOL)checkAndReportDecodingFailureIfNeededFordouble:(double)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithProto:(id)a0;
- (id)proto;
- (id)encodeAsProto;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAbsoluteDate:(double)a0 eventType:(int)a1 appConsumerSubType:(id)a2 actionConsumerSubType:(id)a3 appBlendingCacheId:(id)a4 actionBlendingCacheId:(id)a5 appSuggestionIds:(id)a6 actionSuggestionIds:(id)a7 metadata:(id)a8;
- (BOOL)isEqualToATXSpotlightEvent:(id)a0;
- (id)initWithDate:(id)a0 eventType:(int)a1 appConsumerSubType:(id)a2 actionConsumerSubType:(id)a3 appBlendingCacheId:(id)a4 actionBlendingCacheId:(id)a5 appSuggestionIds:(id)a6 actionSuggestionIds:(id)a7 metadata:(id)a8;
- (BOOL)checkAndReportDecodingFailureIfNeededForint32_t:(int)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;

@end

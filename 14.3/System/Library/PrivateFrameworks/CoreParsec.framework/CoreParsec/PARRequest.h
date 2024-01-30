@class NSString, NSArray, NSDictionary, NSObject;
@protocol OS_nw_activity;

@interface PARRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long triggerEvent;
@property (retain, nonatomic) NSObject<OS_nw_activity> *nwActivity;
@property (readonly, nonatomic) char *nwActivityToken;
@property (readonly, nonatomic) unsigned int nwActivityLabel;
@property (readonly, nonatomic) unsigned long long queryId;
@property (readonly, nonatomic) unsigned long long clientQueryId;
@property (nonatomic) double scale;
@property (copy, nonatomic) NSString *keyboardInputMode;
@property (copy, nonatomic) NSString *experimentNamespaceId;
@property (nonatomic) BOOL isClientOnlyExperiment;
@property (nonatomic) BOOL isInReservedAllocationForExperiment;
@property (copy, nonatomic) NSString *experimentId;
@property (copy, nonatomic) NSString *treatmentId;
@property (copy, nonatomic) NSString *clientShortName;
@property (nonatomic) BOOL verboseReply;
@property (nonatomic) BOOL pretend;
@property (copy, nonatomic) NSArray *queryItems;
@property (copy, nonatomic) NSDictionary *headerItems;

+ (id)searchRequestWithString:(id)a0 triggerEvent:(unsigned long long)a1 queryId:(unsigned long long)a2;
+ (id)cardRequestWithURL:(id)a0;
+ (id)moreResultsRequestWithURL:(id)a0;
+ (id)searchRequestWithString:(id)a0 triggerEvent:(unsigned long long)a1;
+ (id)zeroKeywordRequest;
+ (id)lookupRequestWithString:(id)a0 queryContext:(id)a1 domain:(id)a2 lookupSelectionType:(long long)a3 appBundleId:(id)a4;
+ (id)searchRequestWithEngagedSuggestion:(id)a0 triggerEvent:(unsigned long long)a1 queryId:(unsigned long long)a2;
+ (id)zeroKeywordRequest:(unsigned long long)a0;
+ (id)searchReplayRequestWithString:(id)a0;
+ (id)moreResultsRequestWithURL:(id)a0 queryId:(unsigned long long)a1;
+ (id)cardRequestWithURL:(id)a0 queryId:(unsigned long long)a1;
+ (id)lookupRequestWithString:(id)a0 queryContext:(id)a1 domain:(id)a2 lookupSelectionType:(long long)a3 appBundleId:(id)a4 queryId:(unsigned long long)a5;
+ (id)flightRequestForQuery:(id)a0 date:(id)a1 appBundleId:(id)a2;

- (Class)responseClass;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setQueryId:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;

@end

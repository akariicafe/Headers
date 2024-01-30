@class NSString, NSDictionary;

@interface SFStartNetworkSearchFeedback : SFStartSearchFeedback

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSDictionary *headers;
@property (nonatomic) unsigned long long endpoint;
@property (copy, nonatomic) NSString *experimentId;
@property (copy, nonatomic) NSString *treatmentId;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithInput:(id)a0 url:(id)a1 headers:(id)a2 triggerEvent:(unsigned long long)a3 endpoint:(unsigned long long)a4 queryId:(unsigned long long)a5 experimentId:(id)a6 treatmentId:(id)a7;
- (id)initWithCoder:(id)a0;
- (id)initWithInput:(id)a0 url:(id)a1 headers:(id)a2 triggerEvent:(unsigned long long)a3 endpoint:(unsigned long long)a4;
- (void)encodeWithCoder:(id)a0;
- (id)initWithInput:(id)a0 url:(id)a1 headers:(id)a2 triggerEvent:(unsigned long long)a3 endpoint:(unsigned long long)a4 queryId:(unsigned long long)a5;

@end

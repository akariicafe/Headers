@class NSString, NSDictionary;

@interface AAPaymentSummaryResponse : AAResponse {
    NSDictionary *_responseParameters;
}

@property (readonly, nonatomic) unsigned long long numberOfCards;
@property (readonly, nonatomic) NSString *description;

- (void).cxx_destruct;
- (id)initWithHTTPResponse:(id)a0 data:(id)a1;

@end

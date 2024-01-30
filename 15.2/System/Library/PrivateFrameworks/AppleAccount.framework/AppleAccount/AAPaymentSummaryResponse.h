@class NSString, NSDictionary;

@interface AAPaymentSummaryResponse : AAResponse {
    NSDictionary *_responseParameters;
}

@property (readonly, nonatomic) unsigned long long numberOfCards;
@property (readonly, nonatomic) NSString *description;

- (id)initWithHTTPResponse:(id)a0 data:(id)a1;
- (void).cxx_destruct;

@end

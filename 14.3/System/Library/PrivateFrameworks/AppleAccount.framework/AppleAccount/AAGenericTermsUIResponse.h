@class NSData, NSString, NSDictionary;

@interface AAGenericTermsUIResponse : AAResponse {
    NSDictionary *_responseTermsDictionary;
    NSString *_responseAgreeURL;
    NSData *_responseData;
}

@property (readonly, nonatomic) NSData *responseData;
@property (readonly, nonatomic) NSString *agreeURL;
@property (readonly, nonatomic) NSDictionary *termsDictionary;

- (void).cxx_destruct;
- (id)initWithHTTPResponse:(id)a0 data:(id)a1;

@end

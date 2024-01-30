@class NSData, NSString, NSDictionary;

@interface AAGenericTermsUIResponse : AAResponse {
    NSDictionary *_responseTermsDictionary;
    NSString *_responseAgreeURL;
    NSData *_responseData;
}

@property (readonly, nonatomic) NSData *responseData;
@property (readonly, nonatomic) NSString *agreeURL;
@property (readonly, nonatomic) NSDictionary *termsDictionary;

- (id)initWithHTTPResponse:(id)a0 data:(id)a1;
- (void).cxx_destruct;

@end

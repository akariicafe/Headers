@class NSDictionary;

@interface AAiCloudTermsAgreeResponse : AAResponse {
    NSDictionary *_acceptedTermsInfo;
}

@property (readonly, nonatomic) NSDictionary *acceptedTermsInfo;

- (void).cxx_destruct;

@end

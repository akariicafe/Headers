@class NSString;

@interface AAUpdateNameRequest : AAAppleIDSettingsRequest {
    NSString *_newFirstName;
    NSString *_newLastName;
}

+ (Class)responseClass;

- (id)urlRequest;
- (id)urlString;
- (void).cxx_destruct;
- (id)initWithGrandSlamAccount:(id)a0 accountStore:(id)a1 firstName:(id)a2 lastName:(id)a3;

@end

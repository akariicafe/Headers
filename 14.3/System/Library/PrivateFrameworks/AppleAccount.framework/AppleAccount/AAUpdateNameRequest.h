@class NSString;

@interface AAUpdateNameRequest : AAAppleIDSettingsRequest {
    NSString *_newFirstName;
    NSString *_newLastName;
}

+ (Class)responseClass;

- (id)urlString;
- (id)urlRequest;
- (void).cxx_destruct;
- (id)initWithGrandSlamAccount:(id)a0 accountStore:(id)a1 firstName:(id)a2 lastName:(id)a3;

@end

@class NSString, NSURLRequest, NSURLResponse;

@interface WebNavigationDataPrivate : NSObject {
    NSString *url;
    NSString *title;
    NSURLRequest *originalRequest;
    NSURLResponse *response;
    BOOL hasSubstituteData;
    NSString *clientRedirectSource;
}

- (void)dealloc;

@end

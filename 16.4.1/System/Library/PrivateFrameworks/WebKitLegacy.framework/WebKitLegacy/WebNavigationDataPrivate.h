@interface WebNavigationDataPrivate : NSObject {
    struct RetainPtr<NSString> { void *m_ptr; } url;
    struct RetainPtr<NSString> { void *m_ptr; } title;
    struct RetainPtr<NSURLRequest> { void *m_ptr; } originalRequest;
    struct RetainPtr<NSURLResponse> { void *m_ptr; } response;
    BOOL hasSubstituteData;
    struct RetainPtr<NSString> { void *m_ptr; } clientRedirectSource;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end

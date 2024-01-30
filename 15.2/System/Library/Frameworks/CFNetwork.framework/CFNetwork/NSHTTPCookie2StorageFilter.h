@class NSURL, NSString;

@interface NSHTTPCookie2StorageFilter : NSObject {
    BOOL _isTrusted;
    BOOL _isTrustedCached;
    NSString *_urlScheme;
}

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSURL *mainDocumentURL;
@property (retain, nonatomic) NSURL *siteForCookies;
@property (retain, nonatomic) NSString *partition;
@property BOOL isTopLevelNavigation;
@property BOOL isSafe;
@property BOOL overwriteHTTPOnlyCookies;
@property unsigned long long acceptPolicy;

- (BOOL)isTrusted;
- (void).cxx_destruct;
- (id)init;

@end

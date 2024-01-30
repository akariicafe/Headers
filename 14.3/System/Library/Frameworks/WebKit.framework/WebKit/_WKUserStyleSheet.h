@class NSString, NSURL;

@interface _WKUserStyleSheet : NSObject <WKObject, NSCopying> {
    struct ObjectStorage<API::UserStyleSheet> { struct type { unsigned char __lx[136]; } data; } _userStyleSheet;
}

@property (readonly, copy, nonatomic) NSString *source;
@property (readonly, copy, nonatomic) NSURL *baseURL;
@property (readonly, nonatomic, getter=isForMainFrameOnly) BOOL forMainFrameOnly;
@property (readonly) struct Object { void /* function */ **x0; id x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSource:(id)a0 forMainFrameOnly:(BOOL)a1 legacyWhitelist:(id)a2 legacyBlacklist:(id)a3 baseURL:(id)a4 level:(long long)a5 userContentWorld:(id)a6;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithSource:(id)a0 forMainFrameOnly:(BOOL)a1 legacyWhitelist:(id)a2 legacyBlacklist:(id)a3 baseURL:(id)a4 userContentWorld:(id)a5;
- (id)initWithSource:(id)a0 forMainFrameOnly:(BOOL)a1 legacyWhitelist:(id)a2 legacyBlacklist:(id)a3 userContentWorld:(id)a4;
- (id)initWithSource:(id)a0 forMainFrameOnly:(BOOL)a1;
- (id)initWithSource:(id)a0 forWKWebView:(id)a1 forMainFrameOnly:(BOOL)a2 level:(long long)a3 userContentWorld:(id)a4;
- (id)initWithSource:(id)a0 forWKWebView:(id)a1 forMainFrameOnly:(BOOL)a2 baseURL:(id)a3 level:(long long)a4 userContentWorld:(id)a5;
- (id)initWithSource:(id)a0 forWKWebView:(id)a1 forMainFrameOnly:(BOOL)a2 includeMatchPatternStrings:(id)a3 excludeMatchPatternStrings:(id)a4 baseURL:(id)a5 level:(long long)a6 contentWorld:(id)a7;

@end

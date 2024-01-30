@class NSString, NSDictionary, NSURL, NSDate, NSArray, NSHTTPCookieInternal;

@interface NSHTTPCookie : NSObject <NSCoding> {
    NSHTTPCookieInternal *_cookiePrivate;
}

@property (readonly) struct HTTPCookie { void /* function */ **x0; } *_inner;
@property (readonly, copy) NSDictionary *properties;
@property (readonly) unsigned long long version;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *value;
@property (readonly, copy) NSDate *expiresDate;
@property (readonly, getter=isSessionOnly) BOOL sessionOnly;
@property (readonly, copy) NSString *domain;
@property (readonly, copy) NSString *path;
@property (readonly, getter=isSecure) BOOL secure;
@property (readonly, getter=isHTTPOnly) BOOL HTTPOnly;
@property (readonly, copy) NSString *comment;
@property (readonly, copy) NSURL *commentURL;
@property (readonly, copy) NSArray *portList;
@property (readonly, copy) NSString *sameSitePolicy;

+ (id)_parsedCookiesWithResponseHeaderFields:(id)a0 forURL:(id)a1;
+ (id)_cookieForSetCookieString:(id)a0 forURL:(id)a1 partition:(id)a2;
+ (id)cookiesWithResponseHeaderFields:(id)a0 forURL:(id)a1;
+ (id)requestHeaderFieldsWithCookies:(id)a0;
+ (id)_cf2nsCookies:(struct __CFArray { } *)a0;
+ (const struct __CFArray { } *)_ns2cfCookies:(id)a0;
+ (id)cookieWithProperties:(id)a0;
+ (id)cookieWithCFHTTPCookie:(struct OpaqueCFHTTPCookie { } *)a0;

- (id)replacementObjectForPortCoder:(id)a0;
- (id)_key;
- (id)Name;
- (id)Path;
- (id)Port;
- (id)Value;
- (id)Domain;
- (id)Secure;
- (id)MaxAge;
- (id)Expires;
- (id)Comment;
- (id)Version;
- (id)Discard;
- (id)OriginURL;
- (id)CommentURL;
- (BOOL)_isExpired;
- (struct HTTPCookie { void /* function */ **x0; } *)_inner;
- (id)initWithProperties:(id)a0;
- (id)_initWithReference:(const struct CompactCookieArray { } *)a0 index:(long long)a1;
- (const struct OpaqueCFHTTPCookie { } *)_CFHTTPCookie;
- (id)SameSitePolicy;
- (id)_initWithInternal:(id)a0;
- (id)_storagePartition;
- (id)StoragePartition;
- (void)encodeWithCoder:(id)a0;
- (const struct OpaqueCFHTTPCookie { } *)_GetInternalCFHTTPCookie;
- (id)initWithCFHTTPCookie:(struct OpaqueCFHTTPCookie { } *)a0;
- (long long)_compareForHeaderOrder:(id)a0;
- (id)description;
- (id)_initWithHeader:(const struct CompactCookieHeader { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)_initWithCookie:(id)a0 partition:(id)a1;
- (id)_initWithProperties:(id)a0 fromString:(BOOL)a1;

@end

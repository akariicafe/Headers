@interface __NSConcreteURLComponents : NSURLComponents <NSCopying> {
    struct __CFURLComponents { } *_components;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfPort;
- (id)user;
- (id)path;
- (id)port;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfPath;
- (void)setQuery:(id)a0;
- (void)setUser:(id)a0;
- (id)fragment;
- (id)percentEncodedFragment;
- (void)setPath:(id)a0;
- (id)query;
- (void)setPercentEncodedQuery:(id)a0;
- (id)password;
- (void)setEncodedHost:(id)a0;
- (void)setPort:(id)a0;
- (id)URL;
- (void)setScheme:(id)a0;
- (void)setPassword:(id)a0;
- (id)host;
- (id)initWithString:(id)a0;
- (id)percentEncodedQueryItems;
- (id)percentEncodedHost;
- (id)string;
- (id)percentEncodedPath;
- (id)percentEncodedQuery;
- (id)scheme;
- (id)queryItems;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfFragment;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setQueryItems:(id)a0;
- (id)percentEncodedUser;
- (void)setPercentEncodedPassword:(id)a0;
- (void)setHost:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfScheme;
- (void)dealloc;
- (void)setPercentEncodedHost:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)setPercentEncodedQueryItems:(id)a0;
- (unsigned long long)hash;
- (id)encodedHost;
- (void)setFragment:(id)a0;
- (id)init;
- (id)URLRelativeToURL:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfQuery;
- (void)setPercentEncodedPath:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfPassword;
- (id)description;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfUser;
- (id)initWithURL:(id)a0 resolvingAgainstBaseURL:(BOOL)a1;
- (void)setPercentEncodedFragment:(id)a0;
- (void)setPercentEncodedUser:(id)a0;
- (id)percentEncodedPassword;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfHost;

@end

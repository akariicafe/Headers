@interface __NSConcreteURLComponents : NSURLComponents <NSCopying> {
    struct __CFURLComponents { } *_components;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)setUser:(id)a0;
- (id)queryItems;
- (id)port;
- (id)host;
- (id)user;
- (id)URL;
- (void)setQuery:(id)a0;
- (id)scheme;
- (void)setScheme:(id)a0;
- (void)setPort:(id)a0;
- (id)query;
- (id)path;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)percentEncodedQuery;
- (void)setPercentEncodedQuery:(id)a0;
- (void)setQueryItems:(id)a0;
- (id)percentEncodedUser;
- (void)dealloc;
- (id)initWithString:(id)a0;
- (void)setPassword:(id)a0;
- (id)string;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfQuery;
- (unsigned long long)hash;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfPort;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfPassword;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfUser;
- (void)setPercentEncodedQueryItems:(id)a0;
- (id)percentEncodedPassword;
- (id)description;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfFragment;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfScheme;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfPath;
- (void)setHost:(id)a0;
- (id)fragment;
- (void)setFragment:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)percentEncodedQueryItems;
- (void)setPercentEncodedHost:(id)a0;
- (void)setPercentEncodedUser:(id)a0;
- (id)percentEncodedFragment;
- (void)setPercentEncodedPath:(id)a0;
- (id)percentEncodedHost;
- (id)percentEncodedPath;
- (void)setPath:(id)a0;
- (void)setPercentEncodedPassword:(id)a0;
- (id)password;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfHost;
- (void)setPercentEncodedFragment:(id)a0;
- (id)URLRelativeToURL:(id)a0;
- (id)initWithURL:(id)a0 resolvingAgainstBaseURL:(BOOL)a1;

@end

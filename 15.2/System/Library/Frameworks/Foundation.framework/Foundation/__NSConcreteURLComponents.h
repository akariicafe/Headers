@interface __NSConcreteURLComponents : NSURLComponents <NSCopying> {
    struct __CFURLComponents { } *_components;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)setHost:(id)a0;
- (id)initWithString:(id)a0;
- (void)setPassword:(id)a0;
- (void)setUser:(id)a0;
- (id)queryItems;
- (void)setPercentEncodedHost:(id)a0;
- (id)string;
- (id)percentEncodedQuery;
- (id)percentEncodedUser;
- (void)setPath:(id)a0;
- (id)URLRelativeToURL:(id)a0;
- (id)user;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfFragment;
- (id)percentEncodedQueryItems;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfPath;
- (id)host;
- (void)setPercentEncodedFragment:(id)a0;
- (void)setPercentEncodedQuery:(id)a0;
- (void)setQuery:(id)a0;
- (void)setScheme:(id)a0;
- (id)description;
- (id)scheme;
- (id)password;
- (id)initWithURL:(id)a0 resolvingAgainstBaseURL:(BOOL)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfScheme;
- (id)query;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)percentEncodedHost;
- (void)setPercentEncodedPassword:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfQuery;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfHost;
- (id)URL;
- (void)setPercentEncodedPath:(id)a0;
- (id)path;
- (id)port;
- (id)percentEncodedPath;
- (unsigned long long)hash;
- (void)dealloc;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfPort;
- (void)setFragment:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfPassword;
- (void)setQueryItems:(id)a0;
- (void)setPort:(id)a0;
- (void)setPercentEncodedUser:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfUser;
- (id)percentEncodedFragment;
- (id)fragment;
- (void)setPercentEncodedQueryItems:(id)a0;
- (id)percentEncodedPassword;

@end

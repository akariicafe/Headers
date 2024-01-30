@class NSString, NSArray, NSURL, NSNumber;

@interface NSURLComponents : NSObject <NSCopying>

@property (readonly, copy) NSURL *URL;
@property (readonly, copy) NSString *string;
@property (copy) NSString *scheme;
@property (copy) NSString *user;
@property (copy) NSString *password;
@property (copy) NSString *host;
@property (copy) NSNumber *port;
@property (copy) NSString *path;
@property (copy) NSString *query;
@property (copy) NSString *fragment;
@property (copy) NSString *percentEncodedUser;
@property (copy) NSString *percentEncodedPassword;
@property (copy) NSString *percentEncodedHost;
@property (copy) NSString *percentEncodedPath;
@property (copy) NSString *percentEncodedQuery;
@property (copy) NSString *percentEncodedFragment;
@property (readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } rangeOfScheme;
@property (readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } rangeOfUser;
@property (readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } rangeOfPassword;
@property (readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } rangeOfHost;
@property (readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } rangeOfPort;
@property (readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } rangeOfPath;
@property (readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } rangeOfQuery;
@property (readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } rangeOfFragment;
@property (copy) NSArray *queryItems;
@property (copy) NSArray *percentEncodedQueryItems;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)componentsWithURL:(id)a0 resolvingAgainstBaseURL:(BOOL)a1;
+ (id)componentsWithString:(id)a0;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithString:(id)a0;
- (id)URLRelativeToURL:(id)a0;
- (id)initWithURL:(id)a0 resolvingAgainstBaseURL:(BOOL)a1;

@end

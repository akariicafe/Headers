@class NSSet;

@interface NSURLSessionTaskHTTPAuthenticator : NSObject <NSCopying>

@property (copy) NSSet *statusCodes;

+ (id)sessionTaskHTTPAuthenticatorWithContext:(id)a0 statusCodes:(id)a1;

- (id)initWithStatusCodes:(id)a0;
- (void)getAuthenticationHeadersForTask:(id)a0 task:(id)a1 response:(id)a2 completionHandler:(id /* block */)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end

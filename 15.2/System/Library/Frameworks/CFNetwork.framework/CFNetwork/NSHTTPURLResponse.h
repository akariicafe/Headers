@class NSDictionary, NSHTTPURLResponseInternal;

@interface NSHTTPURLResponse : NSURLResponse {
    NSHTTPURLResponseInternal *_httpInternal;
}

@property (readonly) long long statusCode;
@property (readonly, copy) NSDictionary *allHeaderFields;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isErrorStatusCode:(long long)a0;
+ (id)localizedStringForStatusCode:(long long)a0;

- (id)initWithURL:(id)a0 statusCode:(long long)a1 headerFields:(id)a2 requestTime:(double)a3;
- (id)initWithURL:(id)a0 statusCode:(long long)a1 HTTPVersion:(id)a2 headerFields:(id)a3;
- (id)valueForHTTPHeaderField:(id)a0;
- (id)_peerCertificateChain;
- (void)encodeWithCoder:(id)a0;
- (id)_allHTTPHeaderFieldsAsArrays;
- (id)_initWithCFURLResponse:(struct _CFURLResponse { } *)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end

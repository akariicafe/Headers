@class NSDictionary, NSHTTPURLResponseInternal;

@interface NSHTTPURLResponse : NSURLResponse {
    NSHTTPURLResponseInternal *_httpInternal;
}

@property (readonly) long long statusCode;
@property (readonly, copy) NSDictionary *allHeaderFields;

+ (BOOL)isErrorStatusCode:(long long)a0;
+ (BOOL)supportsSecureCoding;
+ (id)localizedStringForStatusCode:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)valueForHTTPHeaderField:(id)a0;
- (void)dealloc;
- (id)description;
- (id)_allHTTPHeaderFieldsAsArrays;
- (id)initWithURL:(id)a0 statusCode:(long long)a1 HTTPVersion:(id)a2 headerFields:(id)a3;
- (id)_initWithCFURLResponse:(struct _CFURLResponse { } *)a0;
- (id)_peerCertificateChain;
- (id)initWithURL:(id)a0 statusCode:(long long)a1 headerFields:(id)a2 requestTime:(double)a3;

@end

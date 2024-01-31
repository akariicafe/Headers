@class NSDictionary, NSHTTPURLResponseInternal;

@interface NSHTTPURLResponse : NSURLResponse {
    NSHTTPURLResponseInternal *_httpInternal;
}

@property (readonly) id HTTPPropertyList;
@property (readonly) long long statusCode;
@property (readonly, copy) NSDictionary *allHeaderFields;

+ (BOOL)supportsSecureCoding;
+ (id)localizedStringForStatusCode:(long long)a0;
+ (BOOL)isErrorStatusCode:(long long)a0;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)valueForHTTPHeaderField:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_allHTTPHeaderFieldsAsArrays;
- (id)initWithURL:(id)a0 statusCode:(long long)a1 HTTPVersion:(id)a2 headerFields:(id)a3;
- (id)_initWithCFURLResponse:(struct _CFURLResponse { } *)a0;
- (id)_peerCertificateChain;
- (id)initWithHTTPPropertyList:(id)a0 URL:(id)a1;
- (id)initWithURL:(id)a0 statusCode:(long long)a1 headerFields:(id)a2 requestTime:(double)a3;

@end

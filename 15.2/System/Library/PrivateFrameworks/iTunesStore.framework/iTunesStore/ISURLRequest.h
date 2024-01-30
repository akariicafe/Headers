@class NSLock, NSString, NSData, NSURL, NSArray, NSDictionary, NSInputStream, SSMutableURLRequestProperties;

@interface ISURLRequest : NSObject <NSSecureCoding, NSCopying> {
    NSLock *_lock;
    SSMutableURLRequestProperties *_properties;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *appleClientApplication;
@property (retain) NSData *HTTPBody;
@property (retain) NSInputStream *HTTPBodyStream;
@property (retain) NSString *HTTPMethod;
@property (retain) NSDictionary *queryStringDictionary;
@property (readonly) NSURL *primaryURL;
@property (retain) NSArray *URLs;
@property long long allowedRetryCount;
@property double timeoutInterval;
@property unsigned long long cachePolicy;
@property (retain) NSDictionary *customHeaders;
@property long long URLBagType;
@property long long expectedContentLength;

+ (id)requestWithURL:(id)a0;

- (id)_initCommon;
- (id)initWithURL:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithURLRequest:(id)a0;
- (id)requestProperties;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRequestProperties:(id)a0;
- (void)setValue:(id)a0 forHeaderField:(id)a1;
- (void)setValue:(id)a0 forQueryStringParameter:(id)a1;

@end

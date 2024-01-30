@class NSString, NSDictionary, NSData, ISDataProvider, NSURL, SBKTransaction;

@interface SBKRequest : NSObject {
    NSURL *_requestURL;
    NSString *_action;
    long long _bodyContentType;
    NSDictionary *_headers;
    NSDictionary *_arguments;
}

@property (retain, nonatomic) SBKTransaction *transaction;
@property (readonly, nonatomic, getter=isConcurrent) BOOL concurrent;
@property (nonatomic) long long method;
@property (readonly, nonatomic) double timeoutInterval;
@property (nonatomic) BOOL shouldAuthenticate;
@property (nonatomic) BOOL includeDeviceGUID;
@property (retain, nonatomic) NSData *bodyData;
@property (retain, nonatomic) ISDataProvider *responseDataProvider;

+ (id)_contentTypeStringForBodyContentType:(long long)a0;
+ (long long)bodyContentType;
+ (id)_contentEncodingTypeStringForBodyContentEncodingType:(long long)a0;
+ (long long)bodyContentEncodingType;
+ (id)_methodStringForMethod:(long long)a0;
+ (id)requestWithRequestURL:(id)a0;

- (id)description;
- (void)setValue:(id)a0 forArgument:(id)a1;
- (void).cxx_destruct;
- (void)setValue:(id)a0 forHeaderField:(id)a1;
- (BOOL)acceptsGzipEncoding;
- (id)canonicalResponseForResponse:(id)a0;
- (id)initWithRequestURL:(id)a0;
- (id)descriptionWithoutHeaderFields;
- (void)setBodyDataWithPropertyList:(id)a0;
- (id)copyRequestProperties;
- (id)_defaultHeaderFields;
- (id)newURLOperation;
- (id)newURLOperationWithDelegate:(id)a0;

@end

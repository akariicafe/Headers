@class NSString, NSData, NSDictionary;

@interface HSRequest : NSObject {
    NSDictionary *_arguments;
}

@property (readonly, nonatomic) NSString *action;
@property (readonly, nonatomic, getter=isConcurrent) BOOL concurrent;
@property (nonatomic) long long method;
@property (readonly, nonatomic) double timeoutInterval;
@property (copy, nonatomic) NSData *bodyData;
@property (readonly, nonatomic) BOOL acceptsGzipEncoding;

+ (id)request;

- (id)initWithAction:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)setValue:(id)a0 forArgument:(id)a1;
- (id)URLRequestForBaseURL:(id)a0 sessionID:(unsigned int)a1;
- (id)requestURLForBaseURL:(id)a0 sessionID:(unsigned int)a1;
- (id)canonicalResponseForResponse:(id)a0;

@end

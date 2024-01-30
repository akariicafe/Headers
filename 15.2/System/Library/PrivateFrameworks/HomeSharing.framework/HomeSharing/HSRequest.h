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

- (id)description;
- (id)initWithAction:(id)a0;
- (void)setValue:(id)a0 forArgument:(id)a1;
- (void).cxx_destruct;
- (id)canonicalResponseForResponse:(id)a0;
- (id)requestURLForBaseURL:(id)a0 sessionID:(unsigned int)a1;
- (id)URLRequestForBaseURL:(id)a0 sessionID:(unsigned int)a1;

@end

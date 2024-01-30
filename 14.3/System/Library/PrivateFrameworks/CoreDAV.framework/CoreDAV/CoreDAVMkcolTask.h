@class NSSet, NSURL;
@protocol CoreDAVTaskDelegate;

@interface CoreDAVMkcolTask : CoreDAVActionBackedTask {
    BOOL _sendOrder;
}

@property (retain, nonatomic) NSSet *propertiesToSet;
@property (weak, nonatomic) id<CoreDAVTaskDelegate> delegate;
@property (retain, nonatomic) NSURL *priorOrderedURL;
@property (nonatomic) int absoluteOrder;

- (void).cxx_destruct;
- (id)requestBody;
- (id)initWithURL:(id)a0;
- (id)description;
- (id)additionalHeaderValues;
- (id)httpMethod;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)copyDefaultParserForContentType:(id)a0;
- (id)initWithPropertiesToSet:(id)a0 atURL:(id)a1;

@end

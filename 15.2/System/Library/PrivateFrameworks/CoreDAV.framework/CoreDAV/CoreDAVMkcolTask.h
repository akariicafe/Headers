@class NSSet, NSURL;
@protocol CoreDAVTaskDelegate;

@interface CoreDAVMkcolTask : CoreDAVActionBackedTask {
    BOOL _sendOrder;
}

@property (retain, nonatomic) NSSet *propertiesToSet;
@property (weak, nonatomic) id<CoreDAVTaskDelegate> delegate;
@property (retain, nonatomic) NSURL *priorOrderedURL;
@property (nonatomic) int absoluteOrder;

- (id)httpMethod;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)requestBody;
- (id)additionalHeaderValues;
- (id)copyDefaultParserForContentType:(id)a0;
- (id)initWithURL:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithPropertiesToSet:(id)a0 atURL:(id)a1;

@end

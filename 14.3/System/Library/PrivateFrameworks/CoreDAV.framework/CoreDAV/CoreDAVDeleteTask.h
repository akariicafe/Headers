@class NSString;
@protocol CoreDAVTaskDelegate;

@interface CoreDAVDeleteTask : CoreDAVActionBackedTask

@property (weak, nonatomic) id<CoreDAVTaskDelegate> delegate;
@property (retain, nonatomic) NSString *previousETag;

- (void).cxx_destruct;
- (id)requestBody;
- (id)description;
- (id)additionalHeaderValues;
- (id)httpMethod;
- (void)finishCoreDAVTaskWithError:(id)a0;

@end

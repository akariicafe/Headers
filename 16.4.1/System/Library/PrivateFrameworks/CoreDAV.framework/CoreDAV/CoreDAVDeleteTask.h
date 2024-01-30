@class NSString;
@protocol CoreDAVTaskDelegate;

@interface CoreDAVDeleteTask : CoreDAVActionBackedTask

@property (weak, nonatomic) id<CoreDAVTaskDelegate> delegate;
@property (retain, nonatomic) NSString *previousETag;

- (id)requestBody;
- (id)additionalHeaderValues;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)httpMethod;
- (id)description;
- (void).cxx_destruct;

@end

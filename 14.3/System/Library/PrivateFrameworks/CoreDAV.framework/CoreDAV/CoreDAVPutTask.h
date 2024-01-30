@class NSString;
@protocol CoreDAVTaskDelegate;

@interface CoreDAVPutTask : CoreDAVPostOrPutTask

@property (retain, nonatomic) NSString *nextETag;
@property (weak, nonatomic) id<CoreDAVTaskDelegate> delegate;

- (void).cxx_destruct;
- (id)description;
- (id)httpMethod;
- (void)finishCoreDAVTaskWithError:(id)a0;

@end

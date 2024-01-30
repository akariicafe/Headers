@class NSString;
@protocol CoreDAVTaskDelegate;

@interface CoreDAVPutTask : CoreDAVPostOrPutTask

@property (retain, nonatomic) NSString *nextETag;
@property (weak, nonatomic) id<CoreDAVTaskDelegate> delegate;

- (id)httpMethod;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end

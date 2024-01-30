@class NSError;
@protocol TLTimelineDataSource;

@interface TLOperation : NSOperation

@property (class, readonly, nonatomic) unsigned long long relativePriority;

@property (retain) id<TLTimelineDataSource> dataSource;
@property (copy) id /* block */ completionBlock;
@property (copy) id /* block */ operationCompletionBlock;
@property (readonly) NSError *error;

- (void).cxx_destruct;
- (id)init;

@end

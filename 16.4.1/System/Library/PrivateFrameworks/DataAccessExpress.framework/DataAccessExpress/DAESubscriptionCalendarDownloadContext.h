@class NSObject;
@protocol OS_dispatch_queue, DAESubscribedCalendarDownloadDelegate;

@interface DAESubscriptionCalendarDownloadContext : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) id<DAESubscribedCalendarDownloadDelegate> delegate;

- (void).cxx_destruct;
- (void)asyncCallOutToDelegate:(id /* block */)a0;
- (void)callOutToDelegate:(id /* block */)a0;

@end

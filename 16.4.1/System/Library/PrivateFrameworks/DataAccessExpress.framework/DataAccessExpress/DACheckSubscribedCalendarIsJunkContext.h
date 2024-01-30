@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface DACheckSubscribedCalendarIsJunkContext : NSObject

@property (readonly, nonatomic) NSString *urlString;
@property (readonly, copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) long long junkStatus;

- (void).cxx_destruct;
- (void)finishedWithError:(id)a0;
- (id)initWithURLString:(id)a0 completionBlock:(id /* block */)a1;

@end

@class NSObject;
@protocol OS_dispatch_queue;

@interface DAHolidayCalendarsFetchContext : NSObject

@property (readonly, copy, nonatomic) id /* block */ resultsBlock;
@property (readonly, copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)finishedWithError:(id)a0;
- (id)initWithResultsBlock:(id /* block */)a0 completionBlock:(id /* block */)a1;
- (void)resultsReturned:(id)a0;

@end

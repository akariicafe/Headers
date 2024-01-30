@class NSString, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface DAEGroupExpansionContext : NSObject

@property (readonly, nonatomic) NSString *principalPath;
@property (readonly, nonatomic) NSString *accountID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) NSDictionary *results;
@property (nonatomic) BOOL shouldSyncCalendar;

- (id)initWithCompletionBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)finishedWithError:(id)a0;

@end

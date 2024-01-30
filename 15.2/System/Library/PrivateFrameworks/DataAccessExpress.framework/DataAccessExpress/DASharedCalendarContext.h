@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface DASharedCalendarContext : NSObject

@property (readonly, nonatomic) NSString *calendarID;
@property (readonly, nonatomic) NSString *accountID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) BOOL shouldSyncCalendar;

- (void).cxx_destruct;
- (void)finishedWithError:(id)a0;
- (id)initWithCalendarID:(id)a0 accountID:(id)a1 queue:(id)a2 completionBlock:(id /* block */)a3;

@end

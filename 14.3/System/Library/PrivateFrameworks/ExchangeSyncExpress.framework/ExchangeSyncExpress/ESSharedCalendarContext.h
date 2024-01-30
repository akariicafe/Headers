@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface ESSharedCalendarContext : NSObject

@property (readonly, nonatomic) NSString *calendarID;
@property (readonly, nonatomic) NSString *accountID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) BOOL shouldSyncCalendar;

- (void).cxx_destruct;
- (id)initWithCalendarID:(id)a0 accountID:(id)a1 queue:(id)a2 completionBlock:(id /* block */)a3;
- (void)finishedWithError:(id)a0;

@end

@class NSString, NSArray, NSDate, NSObject;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface PFCoalescerActivityToken : NSObject

@property (retain) NSObject<OS_dispatch_group> *group;
@property (retain) NSObject<OS_dispatch_queue> *isolationQueue;
@property (retain) NSString *reason;
@property (retain) NSArray *callStackReturnAddresses;
@property (retain) NSDate *creationDate;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithDispatchGroup:(id)a0 reason:(id)a1;
- (void)endActivity;

@end

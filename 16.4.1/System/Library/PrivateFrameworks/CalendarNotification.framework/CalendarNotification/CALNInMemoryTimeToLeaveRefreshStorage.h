@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CALNInMemoryTimeToLeaveRefreshStorage : NSObject <CALNTimeToLeaveRefreshStorage>

@property (readonly, nonatomic) NSMutableDictionary *refreshDateMap;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addRefreshDate:(id)a0 withIdentifier:(id)a1;
- (void)removeRefreshDateWithIdentifier:(id)a0;
- (id)refreshDateWithIdentifier:(id)a0;
- (id)refreshDates;
- (void)removeRefreshDates;
- (id)init;
- (void).cxx_destruct;

@end

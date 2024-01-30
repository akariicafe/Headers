@class NSArray, NSMutableArray;

@interface NCNotificationCollapsingQueue : NSObject

@property (retain, nonatomic) NSMutableArray *requests;
@property (nonatomic) unsigned long long collapsingThreshold;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSArray *enqueuedRequestIdentifiers;

- (void)removeNotificationRequest:(id)a0;
- (BOOL)containsNotificationRequest:(id)a0;
- (unsigned long long)_collapsedCountForCollapsibleRequests:(id)a0;
- (void)replaceNotificationRequest:(id)a0;
- (id)_collapsedNotificationRequestFromCollapsibleRequests:(id)a0;
- (void)addNotificationRequest:(id)a0;
- (id)_collapsedNotificationRequestForNotificationRequest:(id)a0 atIndex:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)notificationRequestsCoalescebleWithCoalescedRequest:(id)a0;
- (id)init;
- (id)_requestsCollapsibleWithNotificationRequest:(id)a0;
- (unsigned long long)_indexOfRequestMatchingNotificationRequest:(id)a0;
- (id)peekNextNotificationRequest;
- (BOOL)containsNotificationRequestMatchingRequest:(id)a0;
- (void)_insertPreemptingNotificationRequest:(id)a0;
- (id)peekNextNotificationRequestPassingTest:(id /* block */)a0;

@end

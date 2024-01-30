@class ATXPOICategoryEventAggregator, BPSSink, ATXPOICategoryStream, BMBiomeScheduler, NSObject;
@protocol OS_dispatch_queue;

@interface ATXPOICategoryVisitDataProvider : NSObject

@property (retain, nonatomic) ATXPOICategoryEventAggregator *streamAggregator;
@property (retain, nonatomic) ATXPOICategoryStream *stream;
@property (retain, nonatomic) BMBiomeScheduler *scheduler;
@property (retain, nonatomic) BPSSink *sink;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)initWithStream:(id)a0;
- (BOOL)hasExitedAllCategories:(id)a0;
- (id)getCurrentVisit;
- (void)subscribeToPOIChangesForCategories:(id)a0 observer:(id)a1 enterSelector:(SEL)a2 exitSelector:(SEL)a3 sinkCompletion:(id /* block */)a4;
- (id)init;
- (void).cxx_destruct;
- (void)unsubscribeToPOIChanges;

@end

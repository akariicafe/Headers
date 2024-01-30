@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface WFContentAttributionTracker : NSObject

@property (readonly, nonatomic) NSMutableDictionary *attributionSets;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *trackingAttributionSetQueue;

- (id)init;
- (void).cxx_destruct;
- (void)addAttributionSet:(id)a0 forParameter:(id)a1;
- (id)attributionSetForParameter:(id)a0;
- (id)trackedAttributionSet;

@end

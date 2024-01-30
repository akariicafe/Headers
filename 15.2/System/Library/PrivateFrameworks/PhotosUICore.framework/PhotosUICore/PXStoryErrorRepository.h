@class NSArray, NSDictionary, NSString, NSMutableDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface PXStoryErrorRepository : PXObservable <PXStoryErrorReporter, PXStoryQueueParticipant> {
    NSMutableDictionary *_errorsByComponent;
    NSMutableArray *_errors;
}

@property (readonly, nonatomic) NSArray *errors;
@property (readonly, nonatomic) NSDictionary *errorsByComponent;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *storyQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)analyticsNameForComponent:(id)a0;

@end

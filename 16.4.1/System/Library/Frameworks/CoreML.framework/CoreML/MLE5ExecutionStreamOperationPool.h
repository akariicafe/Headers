@class NSString, NSDictionary, NSURL, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface MLE5ExecutionStreamOperationPool : NSObject

@property (readonly, copy) NSURL *e5BundleURL;
@property (readonly) NSString *functionName;
@property (readonly) NSDictionary *outputDescriptionsByName;
@property (readonly) NSMutableSet *pool;
@property (readonly) NSObject<OS_dispatch_queue> *serialQueue;

- (void).cxx_destruct;
- (id)takeOut;
- (id)initWithE5BundleAtURL:(id)a0 functionName:(id)a1 outputDescriptionsByName:(id)a2;
- (void)putBack:(id)a0;

@end

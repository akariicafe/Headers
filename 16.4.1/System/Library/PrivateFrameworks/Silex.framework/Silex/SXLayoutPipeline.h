@class NSOperationQueue, NSMutableArray, NSString;
@protocol SXDOMObjectProviderFactory, SXLayoutOperationFactory, SXLayoutPipelineDelegate;

@interface SXLayoutPipeline : NSObject <SXLayoutPipeline>

@property (readonly, nonatomic) id<SXLayoutOperationFactory> layoutOperationFactory;
@property (readonly, nonatomic) id<SXDOMObjectProviderFactory> DOMObjectProviderFactory;
@property (readonly, nonatomic) NSOperationQueue *layoutOperationQueue;
@property (readonly, nonatomic) NSMutableArray *preProcessors;
@property (readonly, nonatomic) NSMutableArray *postProcessors;
@property (weak, nonatomic) id<SXLayoutPipelineDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)layoutWithTask:(id)a0;
- (void)addProcessor:(id)a0 type:(unsigned long long)a1;
- (void)cancelTasks;
- (void)removeProcessor:(id)a0 type:(unsigned long long)a1;
- (void)finalizeLayoutForLayoutOperation:(id)a0 task:(id)a1 DOMObjectProvider:(id)a2;
- (id)initWithLayoutOperationFactory:(id)a0 DOMObjectProviderFactory:(id)a1;

@end

@class NSString, IKAppContext, NSMutableArray;
@protocol SKUIPhysicalCirclesTemplateDelegate;

@interface SKUIPhysicalCirclesTemplateDOMFeature : NSObject <SKUIDOMFeature> {
    NSMutableArray *_domUpdateBlocks;
    NSMutableArray *_pendingAnimationRequests;
}

@property (weak, nonatomic) id<SKUIPhysicalCirclesTemplateDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *featureName;
@property (readonly, weak, nonatomic) IKAppContext *appContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)featureName;
+ (id)makeFeatureJSObjectForFeature:(id)a0;

- (void).cxx_destruct;
- (void)_addDOMUpdateBlock:(id /* block */)a0;
- (void)_requestAnimation:(id)a0;
- (void)finishDOMUpdates;
- (id)initWithDOMNode:(id)a0 featureName:(id)a1;
- (id)popPendingAnimationRequests;

@end

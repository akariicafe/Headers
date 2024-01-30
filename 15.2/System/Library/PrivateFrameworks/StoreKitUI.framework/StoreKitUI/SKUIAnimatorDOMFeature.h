@class NSString, IKAppContext;
@protocol SKUIAnimatorDOMFeatureDelegate;

@interface SKUIAnimatorDOMFeature : NSObject <SKUIDOMFeature>

@property (weak, nonatomic) id<SKUIAnimatorDOMFeatureDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *featureName;
@property (readonly, weak, nonatomic) IKAppContext *appContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)featureName;
+ (id)makeFeatureJSObjectForFeature:(id)a0;

- (void).cxx_destruct;
- (id)initWithDOMNode:(id)a0 featureName:(id)a1;

@end

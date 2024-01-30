@class NSString, IKAppContext;
@protocol VSIKItemGroupDelegate;

@interface VSIKItemGroup : NSObject <VSJSItemGroupBridge, IKDOMFeature>

@property (weak, nonatomic) id<VSIKItemGroupDelegate> delegate;
@property (nonatomic) long long selectedItemIndex;
@property (nonatomic, setter=setJSSelectedItem:) long long jsSelectedItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *featureName;
@property (readonly, weak, nonatomic) IKAppContext *appContext;

+ (id)makeFeatureJSObjectForFeature:(id)a0;
+ (void)registerFeature;

- (void).cxx_destruct;
- (id)initWithDOMNode:(id)a0 featureName:(id)a1;

@end

@class NSString, IKDOMFeatureNavigationDocument;

@interface IKSplitTemplate : IKViewElement

@property (copy, nonatomic) NSString *displayMode;
@property (readonly, nonatomic) IKDOMFeatureNavigationDocument *leftNavigationDocument;
@property (readonly, nonatomic) IKDOMFeatureNavigationDocument *rightNavigationDocument;

+ (id)supportedFeatures;

- (void).cxx_destruct;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;
- (id)_featureWithName:(id)a0;

@end

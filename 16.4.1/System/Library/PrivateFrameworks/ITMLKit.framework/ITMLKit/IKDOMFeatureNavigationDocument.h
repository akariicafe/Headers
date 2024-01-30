@class NSString, IKAppContext, NSMutableArray;
@protocol IKAppNavigationController;

@interface IKDOMFeatureNavigationDocument : NSObject <IKAppNavigationController, IKDOMFeature> {
    id<IKAppNavigationController> _appNavigationController;
    NSMutableArray *_stackItems;
}

@property (retain, nonatomic) id<IKAppNavigationController> navigationController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *featureName;
@property (readonly, weak, nonatomic) IKAppContext *appContext;

+ (id)makeFeatureJSObjectForFeature:(id)a0;

- (void)removeDocument:(id)a0;
- (id)documents;
- (void)clear;
- (void).cxx_destruct;
- (id)initWithDOMNode:(id)a0 featureName:(id)a1;
- (void)insertDocument:(id)a0 beforeDocument:(id)a1 options:(id)a2;
- (void)popDocument;
- (void)popToDocument:(id)a0;
- (void)popToRootDocument;
- (void)pushDocument:(id)a0 options:(id)a1;
- (void)replaceDocument:(id)a0 withDocument:(id)a1 options:(id)a2;

@end

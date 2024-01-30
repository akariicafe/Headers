@class NSString, IKAppContext;
@protocol IKAppBrowser;

@interface IKAppBrowserBridge : NSObject <IKDOMFeature>

@property (nonatomic) double cornerRadius;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } maskInset;
@property (weak, nonatomic) id<IKAppBrowser> appBrowser;
@property (readonly, copy, nonatomic) NSString *featureName;
@property (readonly, weak, nonatomic) IKAppContext *appContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)makeFeatureJSObjectForFeature:(id)a0;

- (void)present;
- (void).cxx_destruct;
- (id)initWithDOMNode:(id)a0 featureName:(id)a1;

@end

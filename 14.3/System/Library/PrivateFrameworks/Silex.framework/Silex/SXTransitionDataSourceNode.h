@class NSString, UIView;
@protocol SXTransitionableComponentView;

@interface SXTransitionDataSourceNode : NSObject <SXTransitionDataSource>

@property (readonly, nonatomic) id<SXTransitionableComponentView> componentView;
@property (readonly, nonatomic) BOOL usesThumbnail;
@property (readonly, nonatomic) unsigned long long transitionType;
@property (readonly, nonatomic) UIView *transitionContainerView;
@property (readonly, nonatomic) UIView *transitionContentView;
@property (readonly, nonatomic) BOOL transitionViewUsesThumbnail;
@property (readonly, nonatomic) BOOL transitionViewIsVisible;
@property (readonly, nonatomic) BOOL transitionViewShouldFadeInContent;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } transitionVisibleFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } transitionContainerFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } transitionContentFrame;
@property (readonly, nonatomic) BOOL isTransitionable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithComponentView:(id)a0 transitionType:(unsigned long long)a1 usesThumbnail:(BOOL)a2;

@end

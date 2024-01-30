@class NSArray, NSString;

@interface SBSceneLayoutAnimationWrapperView : UIView <SBSceneLayoutReferenceOrientedView>

@property (nonatomic) long long referenceOrientation;
@property (nonatomic) long long layoutOrientation;
@property (readonly, nonatomic) NSArray *elementWrapperViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)crossfadeWithCompletion:(id /* block */)a0;
- (void)invalidate;
- (id)elementWrapperViewForLayoutRole:(long long)a0;

@end

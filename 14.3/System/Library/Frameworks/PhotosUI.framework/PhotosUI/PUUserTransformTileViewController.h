@class PUAssetReference, NSString, PUDisplayTileTransform, PUUserTransformView;
@protocol PUUserTransformTileViewControllerDelegate;

@interface PUUserTransformTileViewController : PUTileViewController <PUUserTransformViewDelegate> {
    struct { BOOL respondsToDidChangeModelTileTransform; BOOL respondsToDidChangeIsUserInteracting; BOOL respondsToShouldReceiveTouchAtLocationFromProvider; } _delegateFlags;
}

@property (retain, nonatomic, setter=_setUserTransformView:) PUUserTransformView *userTransformView;
@property (nonatomic, setter=_setUntransformedContentFrame:) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _untransformedContentFrame;
@property (copy, nonatomic, setter=_setIdentifier:) NSString *_identifier;
@property (retain, nonatomic) PUDisplayTileTransform *displayTileTransform;
@property (weak, nonatomic) id<PUUserTransformTileViewControllerDelegate> delegate;
@property (retain, nonatomic) PUAssetReference *assetReference;
@property (nonatomic, setter=setUserInteractionEnabled:) BOOL userInteractionEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applyLayoutInfo:(id)a0;
- (void).cxx_destruct;
- (id)_userInputOriginIdentifier;
- (void)dealloc;
- (void)_updateUserInteractionEnabled;
- (void)didChangeAnimating;
- (id)loadView;
- (BOOL)userTransformView:(id)a0 shouldReceiveTouchAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)becomeReusable;
- (void)userTransformView:(id)a0 didChangeUserAffineTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 isUserInteracting:(BOOL)a2;
- (void)_updateUserTransformPadding;
- (void)_updateUserTransformView;
- (void)userTransformView:(id)a0 didChangeIsUserInteracting:(BOOL)a1;
- (id)initWithReuseIdentifier:(id)a0;

@end

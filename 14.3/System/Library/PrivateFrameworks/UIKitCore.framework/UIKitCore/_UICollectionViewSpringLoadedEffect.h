@class NSTimer, NSString;
@protocol UISpringLoadedInteractionEffect;

@interface _UICollectionViewSpringLoadedEffect : NSObject <UISpringLoadedInteractionEffect>

@property (retain, nonatomic) id<UISpringLoadedInteractionEffect> blinkEffect;
@property (retain, nonatomic) NSTimer *stateBlinkTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)interaction:(id)a0 didChangeWithContext:(id)a1;

@end

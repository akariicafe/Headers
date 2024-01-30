@class NSString;
@protocol UISpringLoadedInteractionEffect, SBFSpringLoadedInteractionEffectDelegate;

@interface SBFSpringLoadedInteractionEffect : NSObject <UISpringLoadedInteractionEffect> {
    id<UISpringLoadedInteractionEffect> _blinkEffect;
}

@property (nonatomic) BOOL useFastBlinkAnimation;
@property (weak, nonatomic) id<SBFSpringLoadedInteractionEffectDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

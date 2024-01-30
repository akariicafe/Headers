@class NSString;
@protocol UISpringLoadedInteractionEffect;

@interface UISegmentedControlSpringLoadedEffect : NSObject <UISpringLoadedInteractionEffect>

@property (retain, nonatomic) id<UISpringLoadedInteractionEffect> blinkEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)interaction:(id)a0 didChangeWithContext:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end

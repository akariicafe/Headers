@class NSString;
@protocol UISpringLoadedInteractionEffect;

@interface UIInterfaceActionRepresentationViewSpringLoadedEffect : NSObject <UISpringLoadedInteractionEffect> {
    id<UISpringLoadedInteractionEffect> _blinkEffect;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)interaction:(id)a0 didChangeWithContext:(id)a1;

@end

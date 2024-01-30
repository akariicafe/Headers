@class NSTimer, NSString;
@protocol UISpringLoadedInteractionEffect;

@interface _UITableViewSpringLoadedEffect : NSObject <UISpringLoadedInteractionEffect>

@property (retain, nonatomic) id<UISpringLoadedInteractionEffect> blinkEffect;
@property (retain, nonatomic) NSTimer *stateBlinkTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)interaction:(id)a0 didChangeWithContext:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end

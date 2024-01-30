@class NSString;

@interface SBWindowDefaultLayoutStrategy : NSObject <SBWindowLayoutStrategy> {
    BOOL _clip;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_strategyWithClipping:(BOOL)a0;
+ (id)noClipStrategy;
+ (id)clipStrategy;

- (void)addObserver:(id)a0;
- (id)_init;
- (void)removeObserver:(id)a0;
- (BOOL)shouldClipForWindow:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameWithInterfaceOrientation:(long long)a0 windowScene:(id)a1;

@end

@class NSString;

@interface SBMainDisplayWindowLayoutStrategy : NSObject <SBWindowLayoutStrategy> {
    BOOL _clip;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)noClipStrategy;
+ (id)clipStrategy;
+ (id)_strategyWithClipping:(BOOL)a0;

- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (id)_init;
- (BOOL)shouldClipForWindow:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameWithInterfaceOrientation:(long long)a0;

@end
